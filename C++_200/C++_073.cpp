#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ���� ����, ���� �Լ��� ����ϸ� ���ӽ����̽� ����, Ŀ�ø� ����, �޸� �Ҵ�, �׽�Ʈ ����� ���� �߻��Ѵ�.
// ���� ������ ����� ��������.
 
 
// extern Ű���带 �̿��� ���� ���� ����
extern int g_number = 100;

int Func1() {
	return g_number++;
}


int Func2() {
	return g_number++;
}


int main() {
	
	int number = g_number++;

	cout << "���� �Լ� number" << number << "\n";
	cout << "Fun1 �Լ� number" << Func1() << "\n";
	cout << "Fun2 �Լ� number" << Func2() << "\n";
	
	return 0;
}
