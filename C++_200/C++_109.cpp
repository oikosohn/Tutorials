#include <iostream>
#include <vector>

using namespace std;
 
class TmpClass {
	public: 
		TmpClass() {
			cout << "생성자 호출\n";
		}
		// 클래스 소멸자 
		~TmpClass() {
			cout << "소멸자 호출\n";
		}
};

int main() {
	
	// new -> delete -> null
	// alloc -> free
	
	// 객체는 스택과 힙에서 관리
	// 포인터를 이용해 new 키워드로 객체 생성하면 스택이 아닌 힙 영역에 할당된다. 
	// delete 키워드와 소멸자 사용을 위해 힙 영역에 할당
	TmpClass *tmp_class = new TmpClass();
	
	// 클래스 삭제  
	delete tmp_class;
	
	// 할당된 메모리는 반드시 명시적으로 해제해 메모리 누수를 방지해야 한다. 
	tmp_class = nullptr; 
	return 0;
}
