#include <iostream>
#include <string> // string ����ϸ� �߰��ؾ� �ϴ� ���
 
using namespace std;

int main() {
	
	int offset = 4;
	
	// i�� ���� ���, offset(4)���� ���
	for (int i=1, j = 0; i<=offset; i++, j=0){ // j�� 0���� �ʱ�ȭ  
		for (int k=1; k<=offset-i; k++)
			cout << "  ";
		while (j!=2*i-1){ // j == �� ��� Ƚ�� 
		 cout << "* ";
		 j++;
		}
		cout << endl;
	}
	return 0;
}
