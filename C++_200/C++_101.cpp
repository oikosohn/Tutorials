#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
// filesystem ���ӽ����̽��� �����ϴ� experimetal�� fs�� ���ο� �̸����� �����Ѵ�. 
namespace fs = experimental::filesystem;

int main() {
	// copy(������ ���� �̸�, ����� ���� �̸�)
	// ���� �� ������ ��ο� �̸��� ���ٸ� ����ó���� ���� �ʾҴٴ� ���� �߻�	
	fs::copy("096.txt", "(����)096.txt");
	fs::remove("(����)096.txt"); 
	return 0;
}
