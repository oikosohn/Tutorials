#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	// ���� ��� �����ϸ� ifstream::in���� ���� 
	ifstream ifs("093.txt");
	stringstream ss;
	ss << ifs.rdbuf();
	ifs.close();
	
	string read = "";
	
	cout << "== !ss.eof ==" << "\n";
	while (!ss.eof()) {
		// ss�� ����� ���ڿ��� read�� �Ҵ��ϰ� ���
		// ����, Ư������ ���� ������ �������� �ؽ�Ʈ�� �� ������ ó���Ѵ�. 
		ss >> read;
		cout << read << "\n";
	}
	
	// stringstream�� ��� �����͸� ���ڿ��� ��ȯ�� string�� ��´�. 
	cout << "\n" << "== !ss.str() ==" << "\n";
	read = ss.str();
	cout << read << "\n";
	
	return 0;
}
