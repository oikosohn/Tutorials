#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream stream;
	stream.open("096.txt");
	
	// stream.good()==true : ���� ���� ȣ��Ǿ��� �� 
	if (stream.good()==true)
		cout << "���� ����";
	else
		cout << "���� ����"; 
	
	// ������ �ٷ� �� �ݵ�� close �Լ� ��� 
	stream.close(); 
	
	return 0;
}
