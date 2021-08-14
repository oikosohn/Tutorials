#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// Call by Reference
// 함수가 인자의 포인터를 받아 사용한다. 
// 푀인터가 가리키는 곳(주소)의 값을 직접 변경한다. 
void Func1(int &arg) {
	cout << "변경 전 : " << arg << "\n";
	arg += 10;
	cout << "변경 후 : " << arg << "\n";
}

void Func2(string &info) {
	info += "981년";
}


int main() {
	
	int year = 10;
	
	
	Func1(year);
	cout << "함수 종료 후 : " << year << "\n";
	
	string king_info = "고려 성종 즉위년 : ";
	Func2(king_info);
	cout << king_info << "\n";
	
	return 0;
}
