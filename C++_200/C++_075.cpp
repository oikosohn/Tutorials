#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// Call by Reference
// �Լ��� ������ �����͸� �޾� ����Ѵ�. 
// ǣ���Ͱ� ����Ű�� ��(�ּ�)�� ���� ���� �����Ѵ�. 
void Func1(int &arg) {
	cout << "���� �� : " << arg << "\n";
	arg += 10;
	cout << "���� �� : " << arg << "\n";
}

void Func2(string &info) {
	info += "981��";
}


int main() {
	
	int year = 10;
	
	
	Func1(year);
	cout << "�Լ� ���� �� : " << year << "\n";
	
	string king_info = "��� ���� ������ : ";
	Func2(king_info);
	cout << king_info << "\n";
	
	return 0;
}
