#include <iostream>
#include <vector>

using namespace std;

// 상속 : Has-A 관계== 포함, 집합 관계
// 건물주가 임대료를 받는다.
// 건물주 Has A 임대료 
class Rent {
	public:
		void Payment() {
			cout << "임대료를 받는다.\n";
		}
}; 

class Landload: public Rent {
	public:
		void GetMoney() {
			cout << "건물주라서 ";
			Payment();
		}
};

int main() {
	Landload master;
	master.GetMoney();
	
	return 0;
}
