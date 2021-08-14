#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	long n = -5;
	long long k = -50;
	
	cout << "== 절대값 구하기==" << endl;
	cout << "-10의 절대값 : " << abs(-10) << endl;
	cout << "-5.72의 절대값 : " << fabs(-5.72) << endl; 
	cout << "-5 절대값 : " << labs(n) << endl; 
	cout << "-50 절대값 : " << labs(k) << endl; 
	
	// C++에서는 abs로도 실수의 절대값을 구할 수 있다. => cmath를 include하자. 
	cout << "-5.72의 절대값 : " << abs(-5.72) << endl; 
	cout << "-5의 절대값 : " << abs(n) << endl; 
	cout << "-50의 절대값 : " << abs(k) << endl; 
	
	
	cout << endl << "== 제곱수 구하기==" << endl;
	cout << "2의 2승 : " << pow(2,2) << endl;
	cout << "3의 4승 : " << pow(3,4) << endl;
	cout << "4의 6승 : " << pow(4,6) << endl;
	cout << "8의 3승 : " << pow(8,3) << endl;
	
	return 0;
}
