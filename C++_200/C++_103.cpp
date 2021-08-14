#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main() {
	
	int size = fs::file_size("096.txt");
	
	cout << "파일 크기 : " << size << "바이트";
	
	return 0;
}
