#include <iostream>
#include <string> // string ����ϸ� �߰��ؾ� �ϴ� ���
 
using namespace std;

int main() {
	
	// ����� �Ҽ��� �ݿø� : �Ҽ����� 0.5���� ũ�� �ø��� ������ �� ��
	// ������ �Ҽ��� �ݿø� : �Ҽ����� 0.5���� ũ�� ������ ������ �ø� 
	cout << "round(1.1) : " << round(1.1) << endl;
	cout << "round(-2.3) : " << round(-2.3) << endl; // -2
	cout << "round(40.5) : " << round(40.5) << endl;
	cout << "round(-55.7) : " << round(-55.7) << endl; // -56
	cout << "round(100.9) : " << round(100.9) << endl;
	
	return 0;
}
