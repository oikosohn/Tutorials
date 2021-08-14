#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>
//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 ¹®ÀÚ¿­";
	
	// C++11 stoi : string to int
	int num1 = stoi(str1); // 10
	int num2 = stoi(str2); // 2
	int num3 = stoi(str3); // 456
		
	cout << num1 << ", " << num2 << ", " << num3 << "\n";               
	 
	// atoi : ascii(char) to int
	char str[20] = "20.00";
	int n1 = atoi(str); // 10

	cout << n1 ;          
		     
	return 0;           
}
