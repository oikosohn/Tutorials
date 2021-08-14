#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;



int main() {
	
	const int kSize = 3;
	
	// 배열의 포인터 주소 == number[0]
	// 배열을 사용할 땐 쓰레기 값이 들어가지 않도록 초기화를 잘 하자 
	int numbers[kSize] = {10,20,30};
	int *pointer1 = numbers;
	
	int n1 = 1, n2 = 2, n3 = 3;
	int *pointer2[kSize] = {&n1, &n2, &n3};
	
	// pointer1는 number의 주소를 가리킨다. 
	for (int i=0; i<kSize; i++) {
		cout << "Pointer1 [" << i << "] = " << *(pointer1+i) << "\n";
	}
	
	// pointer2는 변수의 저장 이미 저장함 
	for (int i=0; i<kSize; i++) {
		cout << "Pointer2 [" << i << "] = " << *pointer2[i] << "\n";
	}
	
	return 0;
}
