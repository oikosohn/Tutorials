#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// time_t : 날짜와 시간을 얻을 수 있는 time_t 변수 
	time_t now = time(NULL);
	
	// tm : 구조체, localtime() 함수를 이용해 int 날짜와 시간값을 대입한다. 
	tm* ptm = localtime(&now);
	
	char buffer[64];
	
	// strftime은 문자열을 크기(64)만큼 배열(buffer)에 할당한다. 
	strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", ptm);
	
	cout << buffer;
	
	return 0;
}
