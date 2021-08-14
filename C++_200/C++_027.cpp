#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// 쉼표 연산자 : 비슷한 의미의 코드를 이어 붙이는데 사용
	// 가독성에 문제가 생길 수 있기 때문에 변수 3개를 한 줄에 선언하지는 말자. 
	int goguryeo = 37, baekjae = 18, silla = 57;
	
	printf("삼국 건국연도\n");
	printf("고구려 bc %d년, 백제 bc %d년, 신라 bc %d년", goguryeo, baekjae, silla);
	
	return 0;
}
