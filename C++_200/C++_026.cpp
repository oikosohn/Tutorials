#include <iostream>
#include <string>

using namespace std;

int main() {

	int x = 10;
	int y = 20;
	int z = 0;
	
	// ���� ������ : �ҽ� ������� �ڵ� ����ȭ
	// �б� ó������ if���� �������. 
	z = x > y ? x : y;
	
	cout << "x�� y�� �� ū ���� : " << z << endl;
	
	return 0;
}
