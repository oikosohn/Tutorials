#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 1;
	int y = 9;
	
	// ���ʿ� ��ġ�ϴ� ���� : L-value 
	// tkdtnsms L-value�� �� �� ����. 
	// ���� ��κ��� L-value�� �Ǿ� �Ҵ� ���� ��� �ٲ� �� �ִ�. 
	int z = x+y;
	
	double i = 1.2;
	double j = 2.3;
	
	double k = i+j; 
	
	cout << "x+y = " << z << endl;
	cout << "i+j = " << k << endl;
	
	return 0;
}
