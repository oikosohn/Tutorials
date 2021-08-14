#include <iostream>
#include <string>

using namespace std;

// 네임스페이스 선언 
// 네임스페이스는 변수나 함수를 해당 영역에서만 유효하도록 제한한다. 

namespace silla {
	int year = 935;
	
	void CentralArea(){
		cout << "경상도"<< endl;
	}
} 

namespace baekjae {
	int year = 660;
	
	void CentralArea(){
		cout << "충청도" << endl;
	}
}

// using 키워드 사용해 네임스페이스 사용 선언 
// 같은 이름의 변수와 함수를 사용하는데 프로그램에서 에러가 발생하지 않는다. 
using namespace silla;
using namespace baekjae;

int main() {
	
	// 네임스페이스를 사용하면 같은 성격의 함수와 변수라 할지라도 서로 다른 값을 할당해 사용할 수 있다. 
	// 소스 코드 유지보수에도 효율적이다. 
	cout << "신라의 중심지:  ";
	silla::CentralArea();
	
	cout << "신라 멸망연도 : " << silla::year << endl;
	
	cout << "백제 중심지 : ";
	baekjae::CentralArea();
	
	// 네임스페이스 영역에서만 유효한 변수와 함수라 명시적으로 baekjae::year와 같이 사용 가능 
	cout << "백제 멸망연도 : " << baekjae::year << endl;
	return 0;
}
