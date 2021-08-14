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
	// 내부 변수 모두 초기화
	Data1 data1 = {};  
	
	// Data1 변수, int변수가 차례대로 선언
	// data1, 10의 순서로 전달해야 한다. 
	Data2 data2 = {data1, 10}; 
	
	cout << "Data1 number : " << data2.data1.number << "\n";
	cout << "Data2 number : " << data2.number << "\n";
	return 0;
}
