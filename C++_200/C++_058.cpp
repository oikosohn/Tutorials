#include <iostream>     // std::cout

//#include <algorithm>    // std::transform
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string sentence = "I coding";
	// 2��° ��ġ�� ���ο� ���ڿ� �߰�
	//  ������ 2��° ���ڿ��� �߰��Ǵ� ���ڿ� �ڿ� ��ġ 
	sentence.insert(2, "hate ");
	cout << sentence << "\n";
	
	cout << sentence.length() << "\n";
	cout << sentence[6] << "\n";
	
	sentence.insert(7, "or like ");
	cout << sentence << "\n";
	return 0; 
}
