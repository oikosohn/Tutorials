#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	int number1 = 10;
	int number2 = 20;
	
	// const int�� ����Ų��. const int�̹Ƿ� ���� ������ �� ����. 
	// ����Ű�� ����� ������ �� ������ ����Ű�� ����� ���� ���� �ٲ� ���� ����
	int const *p1; // ���� �����. 
	p1 = &number1;
	// p1 = number1 // �� ���� �Ұ� 
	p1 = &number2; // ����Ű�� ��� ���� ���� 
	cout << *p1 << "\n"; 
	
	// int�� ����Ű�� const �����ͷ� �ʱⰪ�� �ݵ�� �ʿ��ϴ�.  
	// ����Ű�� ����� �ٲ� �� ����. 
	int *const p2 = &number1;
	*p2 = number2; // �� ���� ���� 
	// *p2 = &number2;  // ����Ű�� ��� ���� �Ұ��� 
	cout << *p2 << "\n"; 
	
	// * ��ġ�� ���� �ٲ� �� ���� ���� �޶�����. 
	
	return 0;
}
