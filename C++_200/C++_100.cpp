#include <iostream>
#incldue <fstream>
#include <filesystem>

using namespace std;
// filesystem ���ӽ����̽��� �����ϴ� experimetal�� fs�� ���ο� �̸����� �����Ѵ�. 
namespace fs = experimental::filesystem;

int main() {
	
	// ������Ʈ ������ tmp ���� ���� 
	fs::create_directory("tmp");
	
	// tmp ���� tmp_copy�� ������ ����
	fs::copy("tmp", "tmp_copy");
	
	// tmp ���� ���� 
	fs::remove("tmp");
	
	// tmp_copy ���� ���� 
	fs::remove("tmp_copy");
				 
	return 0;
}
