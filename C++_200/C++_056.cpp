#include <iostream>     // std::cout
#include <algorithm>    // std::transform

//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string silla = "divided into ther Three Kingdoms";
	string joseon = "Yi seong-gye, established Joseon in 1392.";
	
	// 문자열 대소문자 변환 
	// transform(복사할 문자열의 시작점, 복사할 문자열의 종료점, 복사될 문자열의 시작점, 변환선택)  
	// linux g++에서 컴파일하면 인자 toupper가 모호해서 정확하게 캐스팅해야 한다. 
	transform(silla.begin(), silla.end(), silla.begin(), (int(*)(int))toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), (int(*)(int))tolower);
	 
	// 문자 대소문자 변환 
	char lower_ch = 'g';
	char upper_ch = 'B';
	
	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);
	
	cout << "문자열 대문자로 변환 : " << silla << "\n";
	cout << "문자열 소문자로 변환 : " << joseon << "\n";
	cout << "문자 대문자로 변환 : " << lower_ch << "\n";
	cout << "문자 소문자로 변환 : " << upper_ch << "\n";
	
	return 0; 
}
