#include <iostream>
#include <vector>

using namespace std;

// ��� : Is-A ����== �Ӽ� 
// �� is �ǹ��� 
// �� is ������ 
class Landload {
	public:
		void IamLandload() {
			cout << "�ǹ��ִ�.\n";
		}
}; 

class Tenant {
	public:
		void IamTenant() {
			cout << "�����ڴ�.\n";
		}
};

class Nation: public Landload, public Tenant {
	public:
		void Who() {
			cout << "���� ";
			if (is_landload==true)
				IamLandload();
			else
				IamTenant();
		}
	
	public:
		bool is_landload;
};

int main() {
	Nation nation;
	nation.is_landload = true;
	nation.Who();
	
	return 0;
}
