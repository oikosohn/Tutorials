#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;



int main() {
	
	const int kSize = 3;
	
	// �迭�� ������ �ּ� == number[0]
	// �迭�� ����� �� ������ ���� ���� �ʵ��� �ʱ�ȭ�� �� ���� 
	int numbers[kSize] = {10,20,30};
	int *pointer1 = numbers;
	
	int n1 = 1, n2 = 2, n3 = 3;
	int *pointer2[kSize] = {&n1, &n2, &n3};
	
	// pointer1�� number�� �ּҸ� ����Ų��. 
	for (int i=0; i<kSize; i++) {
		cout << "Pointer1 [" << i << "] = " << *(pointer1+i) << "\n";
	}
	
	// pointer2�� ������ ���� �̹� ������ 
	for (int i=0; i<kSize; i++) {
		cout << "Pointer2 [" << i << "] = " << *pointer2[i] << "\n";
	}
	
	return 0;
}
