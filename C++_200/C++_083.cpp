#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 매개변수 포인터 
void Print1(int *arr) {
	cout << "== Print1 == " << "\n";
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << "\n";
	arr[1] = 1000;
}

// 매개변수 포인터 
void Print2(int arr[]) {
	cout << "== Print2 == " << "\n";
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << "\n";
	arr[2] = 2000;
}

int main() {
	
	// 배열 초기화
	int data1[3] = {0,1,2};
	
	Print1(data1);
	Print2(data1); 
	
	cout << "== 결과 ==" << "\n"; // 1 2 3
	cout << data1[0] << ", " << data1[1] << ", " << data1[2] << "\n";
	
	return 0;
}
