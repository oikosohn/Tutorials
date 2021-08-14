#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double x = 5.7;
	int div1 = static_cast<int>(x/5); // 소수점 버리기, static_cast는 정수를 반환한다. 
	double mod1 = x - int(x) * static_cast<int>(x/5);
	
	int y = 10;
	// 정수와 정수를 나눌 때도 나머지가 발생할 수 있어 타입 캐스팅을 해 int 정수로 변환한다. 
	int div2 = static_cast<int>(y/2);
	double mod2 = y % 2;
	
	cout << "5.7 / 5 = 몫 : " << div1 << ", 나머지" << mod1 << endl;
	cout << "10 / 2 = 몫 : " << div2 << ", 나머지" << mod2 << endl;
	
	// C++에서 나머지 연산은 정수형만 가능하다. 
	// 부동소수점은 한정되지 않았기 때문에 나머지 연산이 되지 않는다. 
	// 파이썬에서도 5.7%5를 하면 0.7000000000000002 같은 답이 나온다. 
//	cout << "5.7 / 5 = 몫 : " << int(5.7/5.0) << ", 나머지" << 5.7%5.0 << endl;
	cout << "10 / 2 = 몫 : " << int(10/2) << ", 나머지" << 10%2 << endl;

	
	return 0;
}
