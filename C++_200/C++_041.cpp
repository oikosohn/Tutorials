#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	int p = 0, n = 0, t = 0;
	
	for (int i=1; i<10; i++){ 
		p = 0;
		n = 1;
		for (int j=1; j<=i; j++){
			cout << n << ", ";
			t = n;
			n += p;
			p = t;
		}
		cout << endl;
	}
	return 0;
}
