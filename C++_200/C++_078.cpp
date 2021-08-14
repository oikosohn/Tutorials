#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	int number1 = 10;
	int number2 = 20;
	
	// const int를 가리킨다. const int이므로 값을 변경할 수 없다. 
	// 가리키는 대상을 변경할 수 있으나 가리키는 대상의 값을 직접 바꿀 수는 없다
	int const *p1; // 값이 상수다. 
	p1 = &number1;
	// p1 = number1 // 값 변경 불가 
	p1 = &number2; // 가리키는 대상만 변경 가능 
	cout << *p1 << "\n"; 
	
	// int를 가리키는 const 포인터로 초기값이 반드시 필요하다.  
	// 가리키는 대상을 바꿀 수 없다. 
	int *const p2 = &number1;
	*p2 = number2; // 값 변경 가능 
	// *p2 = &number2;  // 가리키는 대상 변경 불가능 
	cout << *p2 << "\n"; 
	
	// * 위치에 따라 바꿀 수 없는 것이 달라진다. 
	
	return 0;
}
