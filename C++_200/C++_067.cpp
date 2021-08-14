#include <iostream>     // std::cout
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	int n1 = 10;
	double n2 = 67.8;
	
	// 숫자를 문자열로 변환하기  
	string no_str1 = to_string(n1);      
	string no_str2 = to_string(n2);   
	
	cout << "n1 : " << n1 << " " << no_str1 << "\n"; // 10 10
	cout << "n2 : " << n2 << " " << no_str2; // 67.8 67.800000
	
	return 0;
}
