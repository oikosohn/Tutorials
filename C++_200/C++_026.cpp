#include <iostream>
#include <string>

using namespace std;

int main() {

	int x = 10;
	int y = 20;
	int z = 0;
	
	// 삼항 연산자 : 소스 축약으로 코드 최적화
	// 분기 처리에는 if문을 사용하자. 
	z = x > y ? x : y;
	
	cout << "x와 y중 더 큰 값은 : " << z << endl;
	
	return 0;
}
