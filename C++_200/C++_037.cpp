#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	int n = 3;
	
	switch (n) {
		case 1 :
			cout << "n == 1" << endl;
			break; // break 없으면 다음 조건문으로 이동 
		case 2 :
			cout << "n == 1" << endl;
			break;
		case 3 :
			cout << "n == 3" << endl;
			break;
		default : // 유지보수를 고려하면 반드시 default를 구현하자. 
			cout << "n == ?" << endl;
			break;
	}

	return 0;
}
