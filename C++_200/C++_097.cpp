#include <iostream>
#include <filesystem>

using namespace std;

// Ư�� �Լ��� Ư�� ���ӽ����̽��� ���� ���Ѽ� 
// �Լ��� ���ӽ����̽��� �������� �����. 
namespace fs = experimental::filesystem;

int main() {
	
	cout << "������Ʈ ���� : " << fs::current_path() << "\n";
		
	return 0;
}
