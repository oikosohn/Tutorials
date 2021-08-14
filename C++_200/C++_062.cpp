#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I like coding";
	string find_str = "coding";
	string replace_str = "history";
	
	// replace(문자열 찾아 위치 반환, 찾아야 할 문자열 길이, 교체할 문자열);  
	sentence.replace(sentece.find(find_str), find_str.length(), replace_str);           
	
	cout << sentence << "\n";               
	              
	return 0;           
}
