#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// ���� ������ ���� �տ� �����̼�('')�� ����Ѵ�. 
	char character = 'C';
	int integer = 100;
	
	// �Ҽ��� �ٷ� �� ������ ���� double�� �������. 
	double precision = 3.14159;
	bool is_true = true;
	
	// ���ڿ� �ڷ��� string�� ����ϱ� ���� #include <string>�� ����Ѵ�.
	// String�� �Ϲ����� �ڷ����� �ƴ϶� Ŭ�����̱� ������ �̿� ���� ������ �ʿ��ϴ�. 
	// ���������̼�("") ��� 
	string word = "Hello World";   
	
	cout << "char : " << character << endl;
	cout << "int : " << integer << endl;
	cout << "double : " << precision << endl;
	cout << "bool : " << is_true << endl;
	cout << "string : " << word << endl;
	
	return 0;
}
