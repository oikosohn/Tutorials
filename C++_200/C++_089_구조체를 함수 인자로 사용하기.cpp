#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ����ü�� ���� �ڷ����� �ϳ��� ���� ��� ���� 
struct Princess {
	string name;
	string father;
	string birthday = "�� �� ����"; 
} jungso; // ����ü ���� ���� 

// ���� : ����ü �������� �ּ�
// �Ű����� : ����ü ������ 
void Print(Princess *who) {
	cout << who->name << "\n";
	cout << who->father << "\n";
	cout << who->birthday << "\n"; 
} 

int main() {
	
	jungso.name = "���Ұ���";
	jungso.father = "���� ����";
	jungso.birthday = "1412��";
	
	// ����ü�� �Ϲ� ����ó�� �ٷ�����.
	// �ּ� ���� ������ & ���  
	Print(&jungso);	
	
	return 0;
}
