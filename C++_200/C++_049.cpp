#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	
	// seed = �ý��� �ð� 
	// rand �Լ��� srand �Լ��� ���� ����� seed ���� �̿��� �������� ���� �����Ѵ�. 
	// srand(static_cast<unsigned int>(time(NULL)));
	
	// ������ ���� ���� 
	srand(time(0));
	
	for (int i=0; i<5; i++)
		// rand�� ���� 0~32767 
		cout << "���� : " << rand() << endl;
	 
	return 0;
}
