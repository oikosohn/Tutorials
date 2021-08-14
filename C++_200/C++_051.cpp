#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// time_t : ��¥�� �ð��� ���� �� �ִ� time_t ���� 
	time_t now = time(NULL);
	
	// tm : ����ü, localtime() �Լ��� �̿��� int ��¥�� �ð����� �����Ѵ�. 
	tm* ptm = localtime(&now);
	
	char buffer[64];
	
	// strftime�� ���ڿ��� ũ��(64)��ŭ �迭(buffer)�� �Ҵ��Ѵ�. 
	strftime(buffer, 64, "���� ����� ������ %Y�� %m�� %d��, %H�� %M�� %S���Դϴ�.(%p)\n", ptm);
	
	cout << buffer;
	
	return 0;
}
