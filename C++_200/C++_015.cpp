#include <iostream>
#include <vector>

// scope : 어떤 변수든 변수가 유효한 공간이 존재하며, 이러한 영역을 scope라고 한다.
// scoping rule : 유효 범위를 제한하여 사용하는 것  

using namespace std;

// 전역변수 선언 
int x = 10;

int Func1(){
	int y = x+10;
	return y;
}

int Func2(){
	int x = 100;
	return x;
}

int main() {
	
	cout << "y = " << Func1() << endl;
	cout << "x = " << Func2() << endl;
	cout << "x = " << x << endl;
	
	return 0;
}
