#include <iostream>     // std::cout
#include <algorithm>    // std::sort

//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string str = "gfecba";
	
	// ���ڿ� ������ 
	reverse(str.begin(), str.end());
	
	cout << str;
	return 0;           
}
