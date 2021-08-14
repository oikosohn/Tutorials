#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// time_t : 날짜와 시간을 얻을 수 있는 time_t 변수 
	time_t start = time(NULL);
	time_t finish = time(NULL);
	
	int pass_int = 1;
	
	// 그 시점의 시간이 start에 할당된다. 
	time(&start);
	
	// 정수에 1을 더하는 작업 100억 번 반복 
	for (int i=1; i<10000; i++) {
		for (int j=1; j<10000; j++) {
			pass_int += 1;
		}
	}
	
	// 코드를 실행하고 난 후 현재 시간을 finish 변수에 저장한다. 
	time(&finish);
	
	// difftime 함수는 두 시간을 비교해 그 결과를 알려준다.
	// 반환 값은 초 단위이다. 
	cout << "1을 100억 번 더하는 시간: " << difftime(finish, start) << "초\n";

	return 0;
}
