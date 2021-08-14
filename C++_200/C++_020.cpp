#include <iostream>

#include <string>
using namespace std;


int main() {
	
	int x = 10;
	int y = 6;
	
	// 가독성을 높이기 위해 bool 변수 사용 
	bool is_true = false;
	
	if (x>y){
		is_true = true;
	} 
	else {
		is_true = false;
	}
	
	if (is_true==true){
		cout << "x는 y보다 큽니다" << endl;
	} 
	else {
		cout << "x는 y보다 작다" << endl;
	}
	
	return 0;
}
