#include <iostream>

using namespace std;

class Temp {
	int no; // 4바이트 int 
	bool is_no; // 1바이트 bool 
};

int main() {
	int n1 = 100;
	int n2 = 6;
	
	if (n1 < n2)
		cout << "n2가 더 크다." << endl;
	else if (n1 > n2)
		cout << "n1이 더 크다." << endl;
	else
		cout << "n1과 n2는 같다." << endl;
	
	// else if를 한 번 사용하는 것은 괜찮지만 2번 이상 사용은 지양한다.
	// 조건문을 일일이 비교하다 보면 프로그램 카운터가 증가해 성능에도 좋지 안고
	// 조건문이 길어지면 가독성이 떨어진다.
	
	// 아래와 같이 중첩 조건문의 조건이 2개 이상이라면 switch case문을 사용하자. 
	if (n2<7) {
		if (n2>3){
			if (n2==4){
				cout << "n2는 4이다." << endl;
			}
			else if (n2==5)
				cout << "n2는 5이다." << endl;
			else
				cout << "n2는 6이다." << endl;
		}
		else {
			if (n2==3){
				cout << "n2는 3이다." << endl;
			}
			else if (n2==2)
				cout << "n2는 2이다." << endl;
			else
				cout << "n2는 1이하다." << endl;
		}
	}
	
	return 0;
}
