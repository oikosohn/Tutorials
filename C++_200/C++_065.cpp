#include <iostream>     // std::cout
#include <algorithm>    // std::sort

//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string str1 = "gojoseon";
	string str2 = "AaBbCcDdEe";
	
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	
	cout << "소문자만 정렬 : " << str1 << "\n"; // egjnooos
	cout << "대소문자 정렬" << str2 << "\n"; // ABCDEabcde
	
	return 0;           
}
