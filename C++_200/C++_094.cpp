#include <iostream>
#include <fstream>
 
using namespace std;

int main() {
	ifstream file;
	
	// ANSI�� �����ؾ� ���� 
	// ifstream::in : ���� ��� 
	file.open("093.txt", ifstream::in);
	
	string line;
	
	// getline �Լ��� �̿��� �� �پ� �о� line ������ ����
	// �� �پ� �дٰ� ������ �� ���ٸ� while�� ���� 
	while (getline(file, line)) {
		cout << line << "\n";
	}
	
	// �� ������ �ݴ´�
	// ������ ���� ������ �ٸ� ���μ����� ������ ���°� �����Ǳ�
	// ������ ������ ������ ���� ������ �� ����. 
	file.close();
	
	return 0;
}
