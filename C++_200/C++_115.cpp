#include <iostream>
#include <vector>

using namespace std;

// ��� : Has-A ����== ����, ���� ����
// �ǹ��ְ� �Ӵ�Ḧ �޴´�.
// �ǹ��� Has A �Ӵ�� 
class Rent {
	public:
		void Payment() {
			cout << "�Ӵ�Ḧ �޴´�.\n";
		}
}; 

class Landload: public Rent {
	public:
		void GetMoney() {
			cout << "�ǹ��ֶ� ";
			Payment();
		}
};

int main() {
	Landload master;
	master.GetMoney();
	
	return 0;
}
