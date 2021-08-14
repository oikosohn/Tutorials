#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 구조체는 여러 자료형을 하나로 묶어 사용 가능 
struct Princess {
	string name;
	string father;
	string birthday = "알 수 없음"; 
} Goryeo[2]; // 구조체 배열 선언   

int main() {
	
	Princess jm;
	jm.name = "정명공주";
	jm.father = "조선 선조";
	jm.birthday = "1603년 6월 27일";
	
	Goryeo[0].name = "선정왕후";
	Goryeo[0].father = "고려 성종";
	Goryeo[1].name = "효정공주";
	Goryeo[1].father = "고려 현종";
	
	cout << "== 조선 공주 == " << "\n";
	cout << jm.name << "\n";
	cout << jm.father << "\n";
	cout << jm.birthday << "\n\n"; 

	cout << "== 고려 공주 == " << "\n";
	cout << Goryeo[0].name << "\n";
	cout << Goryeo[0].father << "\n";
	cout << Goryeo[0].birthday << "\n\n"; 
	cout << Goryeo[1].name << "\n";
	cout << Goryeo[1].father << "\n";
	cout << Goryeo[1].birthday << "\n"; 			 
	
	return 0;
}
