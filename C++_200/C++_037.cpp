#include <iostream>
#include <string> // string ����ϸ� �߰��ؾ� �ϴ� ���
 
using namespace std;

int main() {
	
	int n = 3;
	
	switch (n) {
		case 1 :
			cout << "n == 1" << endl;
			break; // break ������ ���� ���ǹ����� �̵� 
		case 2 :
			cout << "n == 1" << endl;
			break;
		case 3 :
			cout << "n == 3" << endl;
			break;
		default : // ���������� ����ϸ� �ݵ�� default�� ��������. 
			cout << "n == ?" << endl;
			break;
	}

	return 0;
}
