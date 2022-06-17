// template

#include <iostream>

using namespace std;

// template 키워드 있으면 컴파일러는 소스 빌드 단계에서 자료형 유추 
template <typename T> // T라는 자료형 유추 

T Plus(T x, T y, T z = 1) {
	return x + y + z;
}

int main() {
	
	int n1 = Plus(1, 2);
	int n2 = Plus(1, 2, 3);
	double n3 = Plus(1.1, 2.2);
	double n4 = Plus(1.1, 2.2, 3.3);
	
	cout << "result : " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl; 
		
	return 0;
}

