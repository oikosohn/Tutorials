#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ��� ���� enum
enum Status {
	// enum�� ��ҵ��� ������ ���� ���´�.
	// �� ��Ҵ� ���� ����� ������ �ڵ����� 1�� Ŀ����. 
	normal = 0,
	abnormal, // 1
	disconnect = 100,
	close // 101
};

int main() {
	
	// ������ enum�� ���� ���� close�� ���� 
	Status number = close;
	
	if (number==Status::normal) // �� ȣ�� 
		cout << "Status : normal" << "\n";
	else if (number==abnormal) // ��� �̸� 
		cout << "Status : abnormal" << "\n";	
	else if (number==100) // ���� 
		cout << "Status : disconnect" << "\n";		
	else
		cout << "Status : close" << "\n";		
	
	return 0;
}
