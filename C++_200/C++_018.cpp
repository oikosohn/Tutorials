#include <iostream>

// 문자열을 사용하기 위해 string 표준 헤더 추가 
#include <string>
using namespace std;

//char < short < int < long < long long 순으로 byte 크기가 커진다.
//컴퓨터 구조에 따라 byte 크기가 달라질 수 있다. 
//프로그램 이식성을 고려하면 
//int 대신 int8, int32, int64 등으으로 변수의 크기를 
//소스코드에서 미리 결정한다. 

int main() {
	
	// int 자료형의 범위 : -2,147,483,648 ~ +2,147,483,647
	// unsigned int 자료형의 범위 : 0 ~ 4,294,967,295
	
	// int는 문자열, 실수 할당 불가
	// int에 실수를 할당하면 소수점은 생략되며 데이터 손실 경고 메시지 생성 
	
	int positive = 100;
	int negative = -200;
	int ascii_value = 'A'; // 65
	int floating = 1.56;
	
	cout << "양수 값 : " << positive << endl;
	cout << "음수 값 : " << negative << endl; 
	cout << "아스키 값 : " << ascii_value << endl;
	cout << "실수 값 : " << floating << endl;
	
	return 0;
}
