#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	int n = 0;
	
	while (n<10){
		n++;
		
		if (n%3==0)
			continue;
		else
			cout << "n 값 : " << n << endl;
	} 

	return 0;
}
