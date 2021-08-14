#include <iostream>     // std::cout
#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 자료형 auto는 반환형이 무엇인지 모를 때 사용한다. 
	auto res1 = min(1,5);
	
	// 아스키 코드 값을 기준으로 반환된다.
	// a : 97 , z : 122  
	auto res2 = max('a','z');
	
	cout << res1 << ", " << res2 << "\n";
	
	// minmax in algoritm 
	auto res3 = minmax({'a','n','z'});
	auto res4 = minmax({1,2,3});
	
	// first는 최솟값, second 최대값 
	cout << res3.first << ", " << res3.second << "\n";
	cout << res4.first << ", " << res4.second;
	
	return 0;
}
