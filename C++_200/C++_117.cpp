#include <iostream>
#include <vector>

using namespace std;

// ��� : Not-A ����== ������ 
// �ǹ��ֿ� ���� �����̴� �ƹ� ���赵 ����. 

class Landload {
	public:
		void IamLandload() {
			cout << "�ǹ��ִ�.\n";
		}
}; 

class MaleMonkey {
	public:
		void Favorite() {
			cout << "Favorite : Female Monkey\n";
		}
};

class Nation: public Landload {
	public:
		void Who() {
			cout << "�ȳ� ";
			IamLandload();
		}
	
	public:
		bool is_landload;
};

int main() {
	Nation nation;
	nation.Who();
	
	return 0;
}
