#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 배열 초기화
	int data1[3] = {0,1,2};
	
	data1[0] += 10;
	data1[1] = 100;
	data1[2] -= 2;
	
	cout << "== data1 ==" << "\n"; // 1 2 3
	for (int i=0; i<3; i++)
		cout << "data1[" << i << "] = " << data1[i] << "\n";
	
	return 0;
}
