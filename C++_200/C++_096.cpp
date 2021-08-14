#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// ���� ��� �����ϸ� ifstream::in���� ���� 
	
	const string file_name = "096.txt";
	
	// ���� ���� ���� 
	// ������ �����ϸ� ���� ���� �����ϰ� ���Ӱ� ���� 
	// ifstream::out == ���� ��� 
	ofstream file_out;
	file_out.open(file_name, ifstream::out);
	
	file_out << "���� �����հ� Ȳ����" << "\n";
	file_out << "����� ������ ��ȭ�� ��" << "\n";
	
	file_out.close();
	
	ifstream file_in;
	file_in.open(file_name, ifstream::in);
	
	string line;
	while (getline(file_in, line)) {
		cout << line << "\n";
	}
	
	file_in.close();
	
	return 0;
}
