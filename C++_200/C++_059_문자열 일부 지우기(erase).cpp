#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I hate coding";
	
	// erase(삭제할 영역의 시작 인덱스, 삭제할 문자 개수)
	// sentence[0] ~ sentence[6]까지 총 7개 문자가 삭제된다. 
	sentence.erase(0,7);            
	
	cout << "I like " << sentence << "\n";               
	              
	return 0;           
}
