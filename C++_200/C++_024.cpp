#include <iostream>
#include <string>

using namespace std;

int main() {
		
	string publisher = "������ȭ��";
	string language = "C++";
	
	int x = 10;
	int y = 10;
	
	if (publisher != language)
		cout << "�� ������ ���� �ʴ�." << endl;
	else
		cout << "�� ������ ����." << endl;
		
	if (x>=y)
		cout << "x�� y���� ũ�ų� ����." << endl;
	else
		cout << "x�� y���� ũ�ų� ���� �ʴ�." << endl;
	
	if (x<=20)
		cout << "x�� 20���� �۰ų� ����" << endl;
	else
		cout << "x�� 20���� �۰ų� ���� �ʴ�." << endl;
	
	return 0;
}
