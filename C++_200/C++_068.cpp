#include <iostream>     // std::cout
#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// �ڷ��� auto�� ��ȯ���� �������� �� �� ����Ѵ�. 
	auto res1 = min(1,5);
	
	// �ƽ�Ű �ڵ� ���� �������� ��ȯ�ȴ�.
	// a : 97 , z : 122  
	auto res2 = max('a','z');
	
	cout << res1 << ", " << res2 << "\n";
	
	// minmax in algoritm 
	auto res3 = minmax({'a','n','z'});
	auto res4 = minmax({1,2,3});
	
	// first�� �ּڰ�, second �ִ밪 
	cout << res3.first << ", " << res3.second << "\n";
	cout << res4.first << ", " << res4.second;
	
	return 0;
}
