// ����Ʈ �Ű����� 

#include <iostream>
#include <string> 

using namespace std;

int GetOne() {
	return 1;
} 

// ����Ʈ �Ű������� �ʱ�ȭ���� �ʴ� ������ �ڿ� ��ġ�Ѵ�. 
int Plus(int x, int y = GetOne(), int z = 1) {
	return x + y + z;
}

int main() {
	int n1 = Plus(1);
	int n2 = Plus(1, 2);
	int n3 = Plus(1, 2, 3);
		
	cout << "����� : " << n1 << ", " << n2 << ", " << n3 << endl;
	
	return 0;
}

