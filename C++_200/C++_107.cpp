#include <iostream>

using namespace std;
 
 
// 클래스 default 생성자
class Class1 {
	public:
		Class1() = default; // 클래스 내부 변수를 모두 초기화 
	public: // 멤버 변수 3개 
		int number; // 0
		double prime; // 0
		string word; // 공란 
}; 

class Class2 {
	public:
		Class2() {}; 
	public:
		int number; // 쓰레기값 
		double prime; // 쓰레기값 
		string word; // 공란 
};

int main() {
	
	Class1 *class1 = new Class1(); // 객체 생성, new를 사용하면 메모리 힙 영역에 할당된다. 
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << "\n";
	
	Class2 *class2 = new Class2(); // 객체 생성 
	cout << "Class2 : " << class2->number << ", " << class2->prime << ", " << class2->word << "\n";
	
	return 0;
}
