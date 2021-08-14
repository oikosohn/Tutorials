#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 함수는 인자를 받을 때 복사해서 사용한다. 
void Func(int arg) {
	cout << "변경 전 : " << arg << "\n";
	arg += 10;
	cout << "변경 후 : " << arg << "\n";
}


int main() {
	
	int year = 10;
	
	// Call by Value
	Func(year);
	
	cout << "함수 종료 후 : " << year << "\n";
	
	return 0;
}
