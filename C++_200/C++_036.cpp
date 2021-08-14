#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	int data[10] = {5,19,76,3,10,89,54,43,2,17};
	
	cout << (sizeof(data)/sizeof(*data)) << endl;
	cout << (sizeof(data)/sizeof(data[0])) << endl;
	
	for (int i=0; i<10; i++) {
		if (data[i] % 2 == 0)
			cout << i << " : " << data[i] << "는 짝수" << endl;
		else
			cout << i << " : " << data[i] << "는 홀수" << endl;
	}
	
	return 0;
}
