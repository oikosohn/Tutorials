#include <iostream>

using namespace std;
 
class TmpClass {
	public: 
		// 클래스 생성자 초기화 리스트에서 변수 초기화
		// 생성자가 호출되는 시점에 변수 값을 설정하기 때문에 이전 값은 무시하고 새로운 값으로 할당된다. 
		TmpClass() : number1(10), number2(20), name("나운 : 문자명왕 이름") {}
	
	void Print() {
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << "\n";
	}
	
	private: // 이전 값 
		int number1 = 1;
		const int number2 = 2;
		static const int number3 = 3;
		string name = "조다 : 장수왕 아들";	
};

int main() {
	
	TmpClass tc;
	tc.Print(); // 10, 20, 3 나운 : 문자명왕 이름 
	return 0;
}
