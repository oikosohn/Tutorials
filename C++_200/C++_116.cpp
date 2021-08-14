#include <iostream>
#include <vector>

using namespace std;

// 상속 : Is-A 관계== 속성 
// 나 is 건물주 
// 나 is 세입자 
class Landload {
	public:
		void IamLandload() {
			cout << "건물주다.\n";
		}
}; 

class Tenant {
	public:
		void IamTenant() {
			cout << "세입자다.\n";
		}
};

class Nation: public Landload, public Tenant {
	public:
		void Who() {
			cout << "저는 ";
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
