#include <iostream>
#include <string>

using namespace std;

int main() {
	
	const int kArraySize = 3;
	
	// 아래 코드는 배열을 정의한다
	// 배열보다 vector, list, tuple과 같은 컨테이너를 많이 사용한다. 
	// 컨테이너가 갖는 메모리 점유율 등의 문제가 있어서 배열과 컨테이너를 적절히 사용하자. 
	int founding[kArraySize];
	founding[0] = 918;
	founding[1] = 1392;
	founding[2] = 1948;
		
	cout << "고려 건국 연도: " << founding[0] << endl;
	cout << "조선 건국 연도: " << founding[1] << endl;
	cout << "한국 건국 연도: " << founding[2] << endl;
	return 0;
}
