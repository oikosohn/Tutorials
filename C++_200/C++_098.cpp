#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = experimental::filesystem;

int main() {
	
	// fs::exists ���� ���� ���� Ȯ�� 
	if (fs::exists("c:\\Target")==true)
		cout << "���� ����";
	else
		cout << "���� ����";
		
	return 0;
}
