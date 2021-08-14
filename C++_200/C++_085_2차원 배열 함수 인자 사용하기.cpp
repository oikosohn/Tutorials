#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

void Func1(int arr[2][2]) {
	arr[0][0] = 100;
}

void Func2(int arr[][2], int row) {
	arr[row-2][1] = 2000;
}

// int *arr은 data 배열의 1행 1열을 가리킨다. 
void Func3(int *arr, int row, int col) {
	// [0][0] -> [0][1] -> [1][0]
	// *((arr+1)+1) 
	*((arr+row-1)+col-1) = 3000;
}

int main() {
	
	int data[2][2] = {{1,2}, {3,4}}; 
	
	Func1(data);
	Func2(data,2);
	Func3(*data, 2, 2);
	
	cout << "결과" << "\n";
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			cout << data[i][j] << "\n";
		}
	}
	
	return 0;
}
