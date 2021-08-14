#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 배열 초기화
	int data1[2][2] = {1,2,3}; // 1,2,3,0
	int data2[2][3] = {{1, }}; // 1,0,0,0,0,0
	
	cout << "data1[0][0]" << data1[0][0] << "\n"; // 1
	cout << "data1[0][1]" << data1[0][1] << "\n"; // 2
	cout << "data1[1][0]" << data1[1][0] << "\n"; // 3
	cout << "data1[1][1]" << data1[1][1] << "\n"; // 0
	
	cout << "\n";
		
	cout << "data2[0][0]" << data2[0][0] << "\n"; // 1
	cout << "data2[0][1]" << data2[0][1]+1 << "\n"; // 1
	cout << "data2[0][2]" << data2[0][2]+2 << "\n"; // 2
	cout << "data2[1][0]" << data2[1][0]+3 << "\n"; // 3
	cout << "data2[1][1]" << data2[1][1]+4 << "\n"; // 4
	cout << "data2[1][2]" << data2[1][2]+5 << "\n"; // 5
	return 0;
}
