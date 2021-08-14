#include <iostream>     // std::cout
#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 변수 : 실제 값을 저장하는 용도
	int n1 = 10;
	
	// 포인터 : 변수의 주소 저장 
	int *p1 = &n1;
	
	double n2 = 23.4;
	double *p2 = &n2;
	
	cout << "n1 : " << n1 << ", size : " << sizeof(n1) << "\n";
	cout << "p1 : " << p1 << ", size : " << sizeof(p1) << "\n";
	
	cout << "n2 : " << n2 << ", size : " << sizeof(n2) << "\n";
	cout << "p2 : " << p2 << ", size : " << sizeof(p2) << "\n";
		
	return 0;
}
