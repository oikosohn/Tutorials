#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ������ ��ȿ ������ �ٸ��� �̸� �ߺ� ����
// Ư�� ���������� ��ȿ�� ������ ���� ������� �Ѵ�. 

int Temp1(const int arg) {
	int number = 20;
	return number+1;
}


int Temp2(const int arg) {
	int number = arg;
	return number+1;
}


int main() {
	
	int number = 10;
	
	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);
	
	cout << "���� �Լ� number" << number << "\n";
	cout << "Temp1 �Լ� number" << rtn1 << "\n";
	cout << "Temp2 �Լ� number" << rtn2 << "\n";
	
	return 0;
}
