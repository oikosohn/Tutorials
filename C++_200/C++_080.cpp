#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// 상수 집합 enum
// 이름이 겹치면 안 된다. 
enum Status {
	// enum의 요소들은 정수형 값을 갖는다.
	// 각 요소는 이전 요소의 값보다 자동으로 1이 커진다. 
	normal = 0,
	abnormal, // 1
	disconnect = 100,
	close // 101
};

// enum class는 enum의 한계를 극복하기 
// 같은 이름의 enum 요소를 사용할 수 있다. 
// enum class 선언하고 char 형태로 정의
// 자료형 명시하지 않으면 기본적으로 int 형이다. 
enum class MachinStatus : char { 
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main() {
	
	// enum class를 사용하려면 이름을 먼저 기입해야 한다. 
	// 같은 이름의 요소를 여러 곳에서 사용할 수 있기 때문에
	// 어느 열거형의 요소인지 명확하게 알아야 한다. 
	MachinStatus machine = MachinStatus::abnormal;
	
	if (machine==MachinStatus::normal) // 값 호출 
		cout << "Status : normal" << "\n";
	else if (machine==MachinStatus::abnormal) // 요소 이름 
		cout << "Status : abnormal" << "\n";	
	else if (machine==MachinStatus::disconnect) // 정수 
		cout << "Status : disconnect" << "\n";		
	else
		cout << "Status : close" << "\n";		
	
	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << "\n"; 
	
	return 0;
}
