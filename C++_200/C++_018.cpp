#include <iostream>

// ���ڿ��� ����ϱ� ���� string ǥ�� ��� �߰� 
#include <string>
using namespace std;

//char < short < int < long < long long ������ byte ũ�Ⱑ Ŀ����.
//��ǻ�� ������ ���� byte ũ�Ⱑ �޶��� �� �ִ�. 
//���α׷� �̽ļ��� ����ϸ� 
//int ��� int8, int32, int64 �������� ������ ũ�⸦ 
//�ҽ��ڵ忡�� �̸� �����Ѵ�. 

int main() {
	
	// int �ڷ����� ���� : -2,147,483,648 ~ +2,147,483,647
	// unsigned int �ڷ����� ���� : 0 ~ 4,294,967,295
	
	// int�� ���ڿ�, �Ǽ� �Ҵ� �Ұ�
	// int�� �Ǽ��� �Ҵ��ϸ� �Ҽ����� �����Ǹ� ������ �ս� ��� �޽��� ���� 
	
	int positive = 100;
	int negative = -200;
	int ascii_value = 'A'; // 65
	int floating = 1.56;
	
	cout << "��� �� : " << positive << endl;
	cout << "���� �� : " << negative << endl; 
	cout << "�ƽ�Ű �� : " << ascii_value << endl;
	cout << "�Ǽ� �� : " << floating << endl;
	
	return 0;
}
