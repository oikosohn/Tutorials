#include <iostream>

using namespace std;

int main() {
	
	int num1 = 65;
	double num2 = 23.4;
	
	int num3 = int(num2);
	double num4 = double(num1/num2);
	
	char ch = char(num1);
	
	cout << "num1 : " << num1 << endl;
	cout << "num2 : "  << num2 << endl;
	cout << "num3 : " << num3 << endl;
	cout << "num5 : " << num4 << endl;
	cout << "ch : " << ch << endl;
	
	return 0;
}
