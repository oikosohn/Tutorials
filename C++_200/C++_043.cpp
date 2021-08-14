#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	// 양수면 소수점만 버리면 값이 작아진다. 
	cout << "==  소수점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl;
	cout << "floor(-2.3) : " << floor(-2.3) << endl; // -3
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(-55.7) : " << floor(-55.7) << endl; // -56
	cout << "floor(100.9) : " << floor(100.9) << endl;
	
	// 양수면 소수점이 있다면 무조건 올린다. 
	cout << "==  소수점 올리기 ==" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl;
	cout << "ceil(-2.3) : " << ceil(-2.3) << endl; // -2
	cout << "ceil(40.5) : " << ceil(40.5) << endl;
	cout << "ceil(-55.7) : " << ceil(-55.7) << endl; // -55
	cout << "ceil(100.9) : " << ceil(100.9) << endl;
	
	return 0;
}
