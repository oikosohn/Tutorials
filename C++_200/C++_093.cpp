#include <iostream>
#include <fstream>
 
using namespace std;

int main() {
	ifstream read;
	
	// ANSI�� �����ؾ� ���� 
	// ifstream::in : ���� ��� 
	read.open("093.txt", ifstream::in);
	
	// ������ ù ���� �� ���� �д´�. 
	char line = read.get();
	
	// ������ ������ �� ���� ������ �� ���ھ� ����Ѵ�. 
	while (read.eof()==false) {
		cout << line;
		line = read.get();
	}
	
	cout << "\n";
	
	// �� ������ �ݴ´�
	// ������ ���� ������ �ٸ� ���μ����� ������ ���°� �����Ǳ�
	// ������ ������ ������ ���� ������ �� ����. 
	read.close();
	
	return 0;
}
