#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 전역 변수, 전역 함수를 사용하면 네임스페이스 오염, 커플링 문제, 메모리 할당, 테스트 어려움 등이 발생한다.
// 전역 변수의 사용을 자제하자.
 
 
// extern 키워드를 이용해 전역 변수 선언
extern int g_number = 100;

int Func1() {
	return g_number++;
}


int Func2() {
	return g_number++;
}


int main() {
	
	int number = g_number++;

	cout << "메인 함수 number" << number << "\n";
	cout << "Fun1 함수 number" << Func1() << "\n";
	cout << "Fun2 함수 number" << Func2() << "\n";
	
	return 0;
}
