#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// time_t : ��¥�� �ð��� ���� �� �ִ� time_t ���� 
	time_t start = time(NULL);
	time_t finish = time(NULL);
	
	int pass_int = 1;
	
	// �� ������ �ð��� start�� �Ҵ�ȴ�. 
	time(&start);
	
	// ������ 1�� ���ϴ� �۾� 100�� �� �ݺ� 
	for (int i=1; i<10000; i++) {
		for (int j=1; j<10000; j++) {
			pass_int += 1;
		}
	}
	
	// �ڵ带 �����ϰ� �� �� ���� �ð��� finish ������ �����Ѵ�. 
	time(&finish);
	
	// difftime �Լ��� �� �ð��� ���� �� ����� �˷��ش�.
	// ��ȯ ���� �� �����̴�. 
	cout << "1�� 100�� �� ���ϴ� �ð�: " << difftime(finish, start) << "��\n";

	return 0;
}
