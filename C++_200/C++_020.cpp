#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 10;
	int y = 6;
	
	// �������� ���̱� ���� bool ���� ��� 
	bool is_true = false;
	
	if (x>y){
		is_true = true;
	} 
	else {
		is_true = false;
	}
	
	if (is_true==true){
		cout << "x�� y���� Ů�ϴ�" << endl;
	} 
	else {
		cout << "x�� y���� �۴�" << endl;
	}
	
	return 0;
}
