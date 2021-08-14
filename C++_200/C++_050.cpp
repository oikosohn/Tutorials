#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
//#include <string>

using namespace std;

int main() {
	
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "replublic of korea";
	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	
	srand(time(0));
	
	// ���ڿ� ��ü�� ����� ������ �����Ѵ�. 
	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	
	// data�� �ε��� 0~3������ �������� ��ġ 
	random_shuffle(data, data+4);�� 
	
	cout << "== str1 ==" << endl;
	for (auto i : str1)
		cout << i << ", ";
	
	cout << endl << "== str2 ==" << endl;
	for (auto i : str2)
		cout << i << ", ";
	
	cout << endl << "== data1 == " << endl;
	for (auto i : data)
		cout << i << ", ";
	
	return 0;
}
