#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// �迭 �ʱ�ȭ
	int data1[3] = {0,1,2};
	// 0, : ��� 0���� �ʱ�ȭ 
	int data2[2][2] = {{0,}};
	// �ʱ�ȭ ���� ���� 
	int data3[2][2];
	
	cout << "== data1 ==" << "\n"; // 1 2 3
	for (int i=0; i<3; i++)
		cout << "data1[" << i << "] = " << data1[i] << "\n";
		
	cout << "== data2 ==" << "\n"; // 0 0 0 0
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++)
			cout << "data2[" << i << "][" << j << "] = " << data2[i][j] << "\n"; 
	
	cout << "== data3 ==" << "\n"; // �����Ⱚ ��µ� 
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++)
			cout << "data3[" << i << "][" << j << "] = " << data3[i][j] << "\n"; 	

	return 0;
}
