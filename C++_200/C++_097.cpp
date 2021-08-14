#include <iostream>
#include <filesystem>

using namespace std;

// 특정 함수를 특정 네임스페이스에 종속 시켜서 
// 함수를 네임스페이스의 집합으로 만든다. 
namespace fs = experimental::filesystem;

int main() {
	
	cout << "프로젝트 폴더 : " << fs::current_path() << "\n";
		
	return 0;
}
