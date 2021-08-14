#include <iostream>
#include <vector>

using namespace std;
 
class Info {
	public:
		// 클래스 생성자 
		Info() {
			// 변수에 대한 동적 메모리 할당이 이뤄짐 
			data = new int;
			data_arr = new int[3];
		}
		// 클래스 소멸자 : 동적 할당된 메모리 해제
		~Info() {
			delete data;
			delete[] data_arr;
		}
		// 동적 할당된 메모리 해제 
		void Dispose() {
			delete data;
			delete[] data_arr;
		}
	
	// 동적 메모리 할당을 하면 변수 자체는 스택에 있지만
	// 가리키는 메모리는 힙에 있기 때문에 *을 붙여야 한다.	
	private:
		int* data;
		int *data_arr;
};

int main() {
	
	// 객체 생성 시점에 생성자를 통한 동적 할당이 발생
	// 힙 영역에 두 변수를 위한 공간 할당됨. 
	Info *info = new Info();
	
	// 두 변수가 사용하던 메모리 영역 반환 
	info->Dispose();
	
	// 오류 발생 : 해제된 메모리 영역 다시 해제 시도해서
	// 이미 해제된 영역이기 때문에 힙 영역 어디를 가리키는지 몰라 오류 발생  
	delete info;
	
	// 메모리 영역
	// 스택 : 변수처럼 컴파일 시점에 크기가 결정되는 요소들이 할당되는 영역 
	// 바이너리 : static, 전역 요소들이 할당되는 영역 
	// 힙 : 동적으로 메모리 할당되는 영역, 지역 변수 등 프로그램 실행 상황에 맞춰 메모리가 할당/해제
	
	// 변수는 스택 or 힙에 잇다 
	// 함수 내부에 선언된 지역변수는 힙에서 할당되고 해제된다. 
	return 0;
}
