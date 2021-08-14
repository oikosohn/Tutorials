#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 1;
	
	// x = x + 1 을 축약하면 x++로 축약할 수 있다. 
	cout << "x = " << x++ << endl;
	cout << "x = " << x++ << endl;
	cout << "x = " << ++x << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << --x << endl;
	
	return 0;
}
