#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string seven_war = "�����ֶ�";
	string korea_war = "�ѱ�����";
	
	// ���� ���ڿ��̸� 0 ����
	// �ٸ� ���ڿ��̸� -1 ���� 
	if (seven_war.compare(korea_war)==0)
		cout << "���� ���ڿ�";
	else
		cout << "�ٸ� ���ڿ�";
	
	return 0; 
}
