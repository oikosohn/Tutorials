#include <iostream>     // std::cout

//#include <algorithm>    // std::transform
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// C언어 문자열 합치기 : char배열 + strcat + 메모리 재할당
	// C++ 문자열 합치기 : +연산자  
	
	// string은 내부 버퍼를 가지고 있어 가변 길이 문자열 처리 가능 
	string king = "조선 세종";
	string favorite1 = "고기";
	string favorite2 = "야근";
	
	// 빈 문자열 
	string king_info = "";
	
	// += 다른 문자열 추가 
	king_info += king;
	king_info += "은 ";
	king_info += favorite1;
	
	// append 문자열 이어 붙이기 
	king_info.append("와 ");
	king_info.append(favorite2);
	king_info.append("을 좋아했습니다.");
	
	cout << king_info << "\n";
	
	string tmp = "";
	// 추가할 문자열 크기 지정 
	tmp.append("ABC", 2);
	cout << tmp << "\n"; // AB
	
	// 문자열 일부 추출해 추가
	tmp. append("ABC", 1,2); // AB+BC
	cout << tmp << "\n"; // ABBC
	
	return 0; 
}
