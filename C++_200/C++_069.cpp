#include <iostream>     // std::cout
#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// ���� : ���� ���� �����ϴ� �뵵
	int n1 = 10;
	
	// ������ : ������ �ּ� ���� 
	int *p1 = &n1;
	
	double n2 = 23.4;
	double *p2 = &n2;
	
	cout << "n1 : " << n1 << ", size : " << sizeof(n1) << "\n";
	cout << "p1 : " << p1 << ", size : " << sizeof(p1) << "\n";
	
	cout << "n2 : " << n2 << ", size : " << sizeof(n2) << "\n";
	cout << "p2 : " << p2 << ", size : " << sizeof(p2) << "\n";
		
	return 0;
}
