#include <iostream>
#include <vector>
using namespace std;

int main() {
	// char 자료형 : 문자 저장, 아스키 코드 값에 따라 숫자로 값 할당 가능
	// char 범위 : -127 ~ +127
	// unsigned char 범위 : 0 ~ +255 
	
	// 아스키 코드
	// 특수문자 : 33 ~ 47, 58 ~ 64, 91 ~ 96, 123 ~ 126 
	// 숫자 : 48 ~ 57
	// 대문자 : 65 ~ 90
	// 소문자 : 97 ~ 122 
	char ch1 = 'c';
	char ch2 = 200;
	
	unsigned char ch3 = 'c';
	unsigned char ch4 = 200;
	
	printf("char ch1 = %c, %d\n", ch1, ch1);
	
	// char 변수 범위 초과 : 보수 취함 
	// 128-200 = -72로 char의 최소 범위 -127에서 72가 증가한 -56 출력 
	printf("char ch2 = %c, %d\n", ch2, ch2);  
	
	// signed char c1과 똑같은 범위 안의 값이다. 
	printf("char ch3 = %c, %d\n", ch3, ch3);
	
	// unsigned char 범위에 속하는 200 할당받아 숫자 정상 출력되나
	// 200에 해당하는 아스키 값이 없어 물음표가 출력된다. 
	printf("char ch4 = %c, %d\n", ch4, ch4);

	return 0;
}
