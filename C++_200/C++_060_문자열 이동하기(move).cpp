#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 문자열을 복사하지 않고 다른 곳으로 이동할 때 move함수 사용 
	// 기존 변수의 내용은 삭제되고 다른 문자열로 이동된다. 
	
	string str1 = "I like coding";
	string str2 = move(str1);

	cout << "str1 : " << str1 << "\n";
	cout << "str2 : " << str2 << "\n";
	
	vector<int> v1 = {1,2,3};
	vector<int> v2 = move(v1);
	
	cout << "v1 : " << v1.size() << "\n";
	cout << "v2 : " << v2.size() << "\n";
	
	return 0; 
}
