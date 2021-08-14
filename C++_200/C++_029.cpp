#include <iostream>

using namespace std;

int main() {
	
	int x = 2;
	double y = 4.4;
	
	// 캐스트 연산 
	int i = static_cast<int>(y/x); // 가장 기본적인 캐스트 방법
	 
	// dynamic_cast<> : 객체지향 언어의 다형성을 이용한 모호한 타입 캐스팅 오류 방지
	// const_cast<> : 자료형이 갖고 있는 상수 속성 제거
	// reinterpret_cast<> : 어떠한 포인터 타입끼리도 변환할 수 있게 도움
	 
	
	 
	// 그러나 아래와 같은 C언어 스타일 형변환은 
	// 아무 조건도 없이 무조건 변경하는 단점이 있다.
	// 변경이 불가능할 때도 변경을 시도해 예상치 못한 문제가 발생 가능 
	int j = (int) y / x; // 전통적인 자료형 변경 방법
	
	double k = y / x;
	
	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) "  << j << endl;
	cout << "4.4 / 2 = " << k << endl;
	
	return 0;
}
