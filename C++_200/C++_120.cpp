#include <iostream>
#include <vector>

using namespace std;

// �Լ� �����ε� : �Լ��� �̸��� ������ ���ڿ� ���ϰ��� �ٸ� ��� 
int Plus(int arg1, int arg2) {
	return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3) {
	return arg1 + arg2 + arg3;
}

int main() {
	int number1 = Plus(2,4);
	double number2 = Plus(3.4,5.7,8.4);
	
	cout << "number1 : " << number1 << "\n";
	cout << "number2 : " << number2 << "\n"; 
	
	return 0;
}
