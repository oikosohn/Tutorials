#include <iostream>

#include <string>
using namespace std;


int main() {
	
	// double과 float 같이 쓰면 오버 플로우, 언더 플로우 문제가 생겨
	// 의도하지 않은 값을 얻을 수 있다. => double만 사용하 
	
	
	// double : 소수점 15자리 => 주로 double 사용한다. 
	// 크기 : 8바이트, 범위 : -1.7E308 ~ +1.7E308 
	double pi_d = 3.14;
	
	// float : 소수점 7자 
	// 크기 : 4바이트, 범위 : -3.4E38 ~ +3.4E38 
	
	// 컴퓨터는 실수를 기본적으로 8바이트 double로 생각한다.
	// 그렇기 때문에 f를 붙여야 경고 메시지가 발생하지 않는다. 
	float pi_f = 3.14f; 
	
	cout << "pi_d : " << pi_d << endl;
	cout << "pi_f : " << pi_f << endl; 
	
	return 0;
}
