#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

struct Data1 {
	Data1(int x) : number(x) {}
	int number;
};

struct Data2 {
	Data2() {
		number = 10;
	}
	int number;
} data2; // ����ü ���� ���� 

struct Data3 {
	int number = 30;
} data3; // ����ü ���� ���� 

int main() {
	
	Data1 data1(2); // ������ �ѱ�� �ش� ������ �ʱ�ȭ 
	cout << "Data1 : " << data1.number << "\n";
	cout << "Data2 : " << data2.number << "\n";
	cout << "Data3 : " << data3.number << "\n";
	
	return 0;
}
