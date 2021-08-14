#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	
	// seed = 시스템 시간 
	// rand 함수는 srand 함수를 통해 변경된 seed 값을 이용해 무작위로 값을 생성한다. 
	// srand(static_cast<unsigned int>(time(NULL)));
	
	// 임의의 난수 생성 
	srand(time(0));
	
	for (int i=0; i<5; i++)
		// rand의 범위 0~32767 
		cout << "난수 : " << rand() << endl;
	 
	return 0;
}
