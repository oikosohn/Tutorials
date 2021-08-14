#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 1;
	int y = 9;
	
	// 왼쪽에 위치하는 변수 : L-value 
	// tkdtnsms L-value가 될 수 없다. 
	// 변수 대부분은 L-value가 되어 할당 값을 계속 바꿀 수 있다. 
	int z = x+y;
	
	double i = 1.2;
	double j = 2.3;
	
	double k = i+j; 
	
	cout << "x+y = " << z << endl;
	cout << "i+j = " << k << endl;
	
	return 0;
}
