#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string jinduk_name = "김승만";
	string jinsung_name = "kim man";
	
	// 문자열 길이 구하기
	// 알파벳은 대소문자 52개를 0~127개로 구성된 아스키 문자로 표현 가능
	// 한글은 초성, 중성, 종성 등 수가 1만 개가 넘어서 1바이트 아스키 문자로 표현 불가능
	// 0~65,535 까지 표현 가능한 2바이트에 한 글자를 담는다.
	// 한글은 영문에 비해 문자열 길이가 두 배로 늘어난다. 
	cout << "진덕여왕 이름 길이 : " << jinduk_name.length() << "\n";
	cout << "진성여왕 이름 길이 : " << jinsung_name.length() << "\n";
	
	return 0; 
}
