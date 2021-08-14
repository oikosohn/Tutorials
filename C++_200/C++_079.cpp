#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 상수 집합 enum
enum Status {
	// enum의 요소들은 정수형 값을 갖는다.
	// 각 요소는 이전 요소의 값보다 자동으로 1이 커진다. 
	normal = 0,
	abnormal, // 1
	disconnect = 100,
	close // 101
};

int main() {
	
	// 열거형 enum의 현재 값을 close로 선언 
	Status number = close;
	
	if (number==Status::normal) // 값 호출 
		cout << "Status : normal" << "\n";
	else if (number==abnormal) // 요소 이름 
		cout << "Status : abnormal" << "\n";	
	else if (number==100) // 정수 
		cout << "Status : disconnect" << "\n";		
	else
		cout << "Status : close" << "\n";		
	
	return 0;
}
