#include <iostream>
#include <vector>

using namespace std;

// 상속 : Not-A 관계== 무관계 
// 건물주와 수컷 원숭이는 아무 관계도 없다. 

class Landload {
	public:
		void IamLandload() {
			cout << "건물주다.\n";
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
			cout << "안녕 ";
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
