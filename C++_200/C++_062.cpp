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
	
	// replace(���ڿ� ã�� ��ġ ��ȯ, ã�ƾ� �� ���ڿ� ����, ��ü�� ���ڿ�);  
	sentence.replace(sentece.find(find_str), find_str.length(), replace_str);           
	
	cout << sentence << "\n";               
	              
	return 0;           
}
