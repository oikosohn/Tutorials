#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 1;
	
	// x = x + 1 �� ����ϸ� x++�� ����� �� �ִ�. 
	cout << "x = " << x++ << endl;
	cout << "x = " << x++ << endl;
	cout << "x = " << ++x << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << --x << endl;
	
	return 0;
}
