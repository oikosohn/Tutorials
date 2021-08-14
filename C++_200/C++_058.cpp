#include <iostream>     // std::cout

//#include <algorithm>    // std::transform
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I coding";
	// 2번째 위치에 새로운 문자열 추가
	//  기존의 2번째 문자열은 추가되는 문자열 뒤에 위치 
	sentence.insert(2, "hate ");
	cout << sentence << "\n";
	
	cout << sentence.length() << "\n";
	cout << sentence[6] << "\n";
	
	sentence.insert(7, "or like ");
	cout << sentence << "\n";
	return 0; 
}
