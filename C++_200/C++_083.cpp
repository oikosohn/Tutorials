#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// �Ű����� ������ 
void Print1(int *arr) {
	cout << "== Print1 == " << "\n";
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << "\n";
	arr[1] = 1000;
}

// �Ű����� ������ 
void Print2(int arr[]) {
	cout << "== Print2 == " << "\n";
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << "\n";
	arr[2] = 2000;
}

int main() {
	
	// �迭 �ʱ�ȭ
	int data1[3] = {0,1,2};
	
	Print1(data1);
	Print2(data1); 
	
	cout << "== ��� ==" << "\n"; // 1 2 3
	cout << data1[0] << ", " << data1[1] << ", " << data1[2] << "\n";
	
	return 0;
}
