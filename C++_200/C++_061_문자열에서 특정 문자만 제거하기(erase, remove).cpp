#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I like coding";
	
	// erase(������ ������ ���� �ε���, ������ ���� ����)
	// remove : Ư�� ���ڰ� �ִ� ��� �ε����� erase �Լ��� �˷��ش�.
	// remove(���ڿ��� ���� ��ġ, ���ڿ��� ������ ��ġ, ã���� �ϴ� ����)
	// ������ ��� ��ġ�� erase �Լ��� ����  
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());            
	
	cout << sentence << "\n";               
	              
	return 0;           
}
