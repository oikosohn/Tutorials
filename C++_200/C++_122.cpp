// 디폴트 매개변수 

#include <iostream>
#include <string> 

using namespace std;

int GetOne() {
	return 1;
} 

// 디폴트 매개변수는 초기화하지 않는 인자의 뒤에 위치한다. 
int Plus(int x, int y = GetOne(), int z = 1) {
	return x + y + z;
}

int main() {
	int n1 = Plus(1);
	int n2 = Plus(1, 2);
	int n3 = Plus(1, 2, 3);
		
	cout << "결과값 : " << n1 << ", " << n2 << ", " << n3 << endl;
	
	return 0;
}

