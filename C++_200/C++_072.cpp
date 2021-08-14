#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 변수의 유효 범위가 다르면 이름 중복 가능
// 특정 지역에서만 유효한 변수를 지역 변수라고 한다. 

int Temp1(const int arg) {
	int number = 20;
	return number+1;
}


int Temp2(const int arg) {
	int number = arg;
	return number+1;
}


int main() {
	
	int number = 10;
	
	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);
	
	cout << "메인 함수 number" << number << "\n";
	cout << "Temp1 함수 number" << rtn1 << "\n";
	cout << "Temp2 함수 number" << rtn2 << "\n";
	
	return 0;
}
