#include <iostream>

using namespace std;

struct Data1 {
	int number;
};

struct Data2 {
	Data1 data1;
	int number;
} data2;

int main() {
	// ���� ���� ��� �ʱ�ȭ
	Data1 data1 = {};  
	
	// Data1 ����, int������ ���ʴ�� ����
	// data1, 10�� ������ �����ؾ� �Ѵ�. 
	Data2 data2 = {data1, 10}; 
	
	cout << "Data1 number : " << data2.data1.number << "\n";
	cout << "Data2 number : " << data2.number << "\n";
	return 0;
}
