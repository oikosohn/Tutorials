#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I like coding";
	
	// erase(삭제할 영역의 시작 인덱스, 삭제할 문자 개수)
	// remove : 특정 문자가 있는 모든 인덱스를 erase 함수에 알려준다.
	// remove(문자열의 시작 위치, 문자열의 마지막 위치, 찾고자 하는 문자)
	// 공백의 모든 위치를 erase 함수에 리턴  
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());            
	
	cout << sentence << "\n";               
	              
	return 0;           
}
