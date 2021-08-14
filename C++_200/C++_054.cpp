#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string bhb_war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투";
	
	// 찾으면 문자열의 시작 위치가 반환
	// 못 찾으면 -1이 반환 
	int rtn = bhb_war.find("백합벌");
	
	if (rtn>=0) 
		cout << "문자열을 찾았습니다. 위치는 " << rtn << "입니다";
	else
		cout << "문자열을 찾을 수 없습니다.";
	
	return 0; 
}
