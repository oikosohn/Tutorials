#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	// 양수의 소수점 반올림 : 소수점이 0.5보다 크면 올리고 작으면 버 림
	// 음수의 소수점 반올림 : 소수점이 0.5보다 크면 내리고 작으면 올림 
	cout << "round(1.1) : " << round(1.1) << endl;
	cout << "round(-2.3) : " << round(-2.3) << endl; // -2
	cout << "round(40.5) : " << round(40.5) << endl;
	cout << "round(-55.7) : " << round(-55.7) << endl; // -56
	cout << "round(100.9) : " << round(100.9) << endl;
	
	return 0;
}
