#include <iostream>

using namespace std;

class Temp {
	int no; // 4바이트 int 
	bool is_no; // 1바이트 bool 
};

int main() {
	
	// 자료형의 실제 크기를 안다면 스택 깨짐, 통신 loss 등 여러 문제에 대처할 수 있다.
	 
	
	cout << "char 크기 : " << sizeof('p') << endl; // 1바이트 
	cout << "int 크기 : "  << sizeof(10) << endl; // 4바이트 
	cout << "double 크기 : " << sizeof(10.0) << endl; // 8바이트 
	
	// 컴퓨터 프로세스의 데이터 ㅓ스는 한 번에 4바이트 데이터를 담아 이동한다.
	// 4바이트 단위로 몇 번 움직이느냐에 따라 sizeof 결과가 달라진다.
	// Temp는 5바이트이므로 데이터 버스는 두 번 이동한다.
	// 4바이트를 담는 버스가 두 번 이동해 결과는 8바이트이다. 
	cout << "클래스 크기 : " << sizeof(Temp) << endl; // 8바이트 
	
	// 시스템 버스 : CPU, 메모리, 입력 장치, 출력 장치들끼리 데이터 교환을 가능하게 한다.
	// 동기식 : 속도 빠르지만 시스템 클럭 주기 맞추는데 쓸모없는 시간 흐른다.
	// 비동기식 : 핸드 쉐이크 등으로 속도가 느리나 준비만 되면 송수신이 가능해 시간을 효율적으로 사용 가능하다. 
	
	return 0;
}
