#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = experimental::filesystem;

int main() {
	
	// fs::exists 파일 존재 여부 확인 
	if (fs::exists("c:\\Target")==true)
		cout << "폴더 존재";
	else
		cout << "폴더 부재";
		
	return 0;
}
