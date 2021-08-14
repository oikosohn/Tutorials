#include <iostream>     // std::cout
#include <vector>       // std::vector

//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// ���ڿ��� �������� �ʰ� �ٸ� ������ �̵��� �� move�Լ� ��� 
	// ���� ������ ������ �����ǰ� �ٸ� ���ڿ��� �̵��ȴ�. 
	
	string str1 = "I like coding";
	string str2 = move(str1);

	cout << "str1 : " << str1 << "\n";
	cout << "str2 : " << str2 << "\n";
	
	vector<int> v1 = {1,2,3};
	vector<int> v2 = move(v1);
	
	cout << "v1 : " << v1.size() << "\n";
	cout << "v2 : " << v2.size() << "\n";
	
	return 0; 
}
