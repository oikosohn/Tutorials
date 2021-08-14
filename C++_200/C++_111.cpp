#include <iostream>
#include <vector>

using namespace std;

// static 클래스 : 프로그램 어디서나 접근 가능, 단발성 사용 기능 모아두기 좋다. 
// 저장할 필요 없는 데이터나 단순 연산으로 결과를 얻고 싶은 기능이 있다면 static 클래스에 모아두자. 
static class Calculator {
	public:
		// 데이터 저장없이 결과를 위한 연산만 수행 
		int Plus(const int x, const int y) const {
			return x+y;
		}
} calc; // static 클래스를 이용하려면 해당 클래스를 가리키는 변수 필요하다. 

int main() {
	cout << "1 + 2 = " << calc.Plus(1,2);
	return 0;
}
