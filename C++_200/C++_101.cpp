#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
// filesystem 네임스페이스를 포함하는 experimetal을 fs란 새로운 이름으로 정의한다. 
namespace fs = experimental::filesystem;

int main() {
	// copy(복사할 파일 이름, 복사될 파일 이름)
	// 만약 두 인자의 경로와 이름이 같다면 예외처리가 되지 않았다는 에러 발생	
	fs::copy("096.txt", "(복사)096.txt");
	fs::remove("(복사)096.txt"); 
	return 0;
}
