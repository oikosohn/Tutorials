#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I hate coding";
	
	// erase(������ ������ ���� �ε���, ������ ���� ����)
	// sentence[0] ~ sentence[6]���� �� 7�� ���ڰ� �����ȴ�. 
	sentence.erase(0,7);            
	
	cout << "I like " << sentence << "\n";               
	              
	return 0;           
}
