#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main() {
	
	int size = fs::file_size("096.txt");
	
	cout << "���� ũ�� : " << size << "����Ʈ";
	
	return 0;
}
