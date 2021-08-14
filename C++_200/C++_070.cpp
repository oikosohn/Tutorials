#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 포인터는 프로그램 성능을 올리는데 도움이 된다.
// 함수의 인자로 넘어오는 값을 복사하여 사용한는데 인자가 크다면 복사에 소요되는 시간이 늘어난다. 
// 때문에 해당 함수를 자주 호출하면 성능이 떨어진다

// 인자의 크키가 클수록 포인터를 이용해 주소만 넘기는 것이 좋다. 

// 주소를 받을 때 포인터 변수로 받는다. 
int PointerFunc(vector<string> *info) {
	
	// 벡터 크기 조회 
	if (info->empty() == true) return 0;
	else return sizeof(info);
}

int main() {
	
	vector<string> message;
	message.push_back("고려 장군");
	message.push_back("척준경!");
	message.push_back("절친 이름은");
	message.push_back("... 무엇일까?");
	
	cout << "포인터 인자 크기 : " << PointerFunc(&message) << "\n"; // 8
	cout << "원래 변수 크기 : " << sizeof(message); // 24
	
	return 0;
}
