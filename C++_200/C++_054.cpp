#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string bhb_war = "���չ� ���� : ���� ���� �ο�â�� �ϱ���� ������ ����";
	
	// ã���� ���ڿ��� ���� ��ġ�� ��ȯ
	// �� ã���� -1�� ��ȯ 
	int rtn = bhb_war.find("���չ�");
	
	if (rtn>=0) 
		cout << "���ڿ��� ã�ҽ��ϴ�. ��ġ�� " << rtn << "�Դϴ�";
	else
		cout << "���ڿ��� ã�� �� �����ϴ�.";
	
	return 0; 
}
