#include <iostream>
#incldue <fstream>
#include <filesystem>

using namespace std;
// filesystem 네임스페이스를 포함하는 experimetal을 fs란 새로운 이름으로 정의한다. 
namespace fs = experimental::filesystem;

int main() {
	
	// 프로젝트 폴더에 tmp 폴더 생성 
	fs::create_directory("tmp");
	
	// tmp 폴더 tmp_copy란 폴더로 복사
	fs::copy("tmp", "tmp_copy");
	
	// tmp 폴더 삭제 
	fs::remove("tmp");
	
	// tmp_copy 폴더 삭제 
	fs::remove("tmp_copy");
				 
	return 0;
}
