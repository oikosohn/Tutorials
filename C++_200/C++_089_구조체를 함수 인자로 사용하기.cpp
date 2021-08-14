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
} jungso; // 구조체 변수 선언 

// 인자 : 구조체 포인터의 주소
// 매개변수 : 구조체 포인터 
void Print(Princess *who) {
	cout << who->name << "\n";
	cout << who->father << "\n";
	cout << who->birthday << "\n"; 
} 

int main() {
	
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";
	
	// 구조체는 일반 변수처럼 다뤄진다.
	// 주소 번지 지정자 & 사용  
	Print(&jungso);	
	
	return 0;
}
