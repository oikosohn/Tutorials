#include <iostream>
#include <string> // string ����ϸ� �߰��ؾ� �ϴ� ��� 
using namespace std;

int main() {
	
	string str = "The Jin state was formed in souther Korea by the 3rd centruy BC";
	
	char find = 'a';
	
	int size = str.size();
	int cnt = 0;
	
	for (int i=0; i<size; i++) {
		if (str[i]==find)
			cnt ++;
	}
	
	cout << "������ a ������ " << cnt << "�� �Դϴ�." << endl;
	return 0;
}
