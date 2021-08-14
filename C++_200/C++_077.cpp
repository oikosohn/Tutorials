#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// #define : 매크로	
	// 상수형 변수 const : C언어의 #define 대체 가능 
	const string job = "developer";
	
	string question = "Who are you : ";
	string answer = "My job is : ";
	
	cout << question << job << "\n";
	cout << answer << job << "\n";
	
	return 0;
}
