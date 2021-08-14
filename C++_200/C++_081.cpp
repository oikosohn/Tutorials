#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 배열 초기화
	int data1[3] = {0,1,2};
	// 0, : 모두 0으로 초기화 
	int data2[2][2] = {{0,}};
	// 초기화 하지 않음 
	int data3[2][2];
	
	cout << "== data1 ==" << "\n"; // 1 2 3
	for (int i=0; i<3; i++)
		cout << "data1[" << i << "] = " << data1[i] << "\n";
		
	cout << "== data2 ==" << "\n"; // 0 0 0 0
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++)
			cout << "data2[" << i << "][" << j << "] = " << data2[i][j] << "\n"; 
	
	cout << "== data3 ==" << "\n"; // 쓰레기값 출력됨 
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++)
			cout << "data3[" << i << "][" << j << "] = " << data3[i][j] << "\n"; 	

	return 0;
}
