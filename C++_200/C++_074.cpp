#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// �Լ��� ���ڸ� ���� �� �����ؼ� ����Ѵ�. 
void Func(int arg) {
	cout << "���� �� : " << arg << "\n";
	arg += 10;
	cout << "���� �� : " << arg << "\n";
}


int main() {
	
	int year = 10;
	
	// Call by Value
	Func(year);
	
	cout << "�Լ� ���� �� : " << year << "\n";
	
	return 0;
}
