#include <iostream>     // std::cout

//#include <algorithm>    // std::transform
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// C��� ���ڿ� ��ġ�� : char�迭 + strcat + �޸� ���Ҵ�
	// C++ ���ڿ� ��ġ�� : +������  
	
	// string�� ���� ���۸� ������ �־� ���� ���� ���ڿ� ó�� ���� 
	string king = "���� ����";
	string favorite1 = "���";
	string favorite2 = "�߱�";
	
	// �� ���ڿ� 
	string king_info = "";
	
	// += �ٸ� ���ڿ� �߰� 
	king_info += king;
	king_info += "�� ";
	king_info += favorite1;
	
	// append ���ڿ� �̾� ���̱� 
	king_info.append("�� ");
	king_info.append(favorite2);
	king_info.append("�� �����߽��ϴ�.");
	
	cout << king_info << "\n";
	
	string tmp = "";
	// �߰��� ���ڿ� ũ�� ���� 
	tmp.append("ABC", 2);
	cout << tmp << "\n"; // AB
	
	// ���ڿ� �Ϻ� ������ �߰�
	tmp. append("ABC", 1,2); // AB+BC
	cout << tmp << "\n"; // ABBC
	
	return 0; 
}
