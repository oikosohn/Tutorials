#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ���� : ������� �ּ�, �Ű����� : ������ 
void Func1(bool *is_on) {
	// ������ �ּҸ� ��������� �˷��ָ� �������� ũ�Ⱑ ���ڷ� �Ѿ��. 
	cout << "Call by address : " << sizeof(is_on) << "\n"; // 8
}

// ���� : ����, �Ű����� : ������ �ּ� 
void Func2(bool &is_on) {
	// �Ѿ���� ���� �����ͷ� ������ �ڷ�����ŭ�� ����Ʈ�� ���ȴ�. 
	cout << "Call by reference : " << sizeof(is_on) << "\n"; // 1
}


int main() {
	
	bool is_tmp = true;
	
	Func1(&is_tmp);
	Func2(is_tmp);
	
	return 0;
}
