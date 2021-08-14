#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 인자 : 명시적인 주소, 매개변수 : 포인터 
void Func1(bool *is_on) {
	// 변수의 주소를 명시적으로 알려주면 포인터의 크기가 인자로 넘어간다. 
	cout << "Call by address : " << sizeof(is_on) << "\n"; // 8
}

// 인자 : 변수, 매개변수 : 변수의 주소 
void Func2(bool &is_on) {
	// 넘어오는 값을 포인터로 받으면 자료형만큼의 바이트만 사용된다. 
	cout << "Call by reference : " << sizeof(is_on) << "\n"; // 1
}


int main() {
	
	bool is_tmp = true;
	
	Func1(&is_tmp);
	Func2(is_tmp);
	
	return 0;
}
