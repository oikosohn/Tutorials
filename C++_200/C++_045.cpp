#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	long n = -5;
	long long k = -50;
	
	cout << "== ���밪 ���ϱ�==" << endl;
	cout << "-10�� ���밪 : " << abs(-10) << endl;
	cout << "-5.72�� ���밪 : " << fabs(-5.72) << endl; 
	cout << "-5 ���밪 : " << labs(n) << endl; 
	cout << "-50 ���밪 : " << labs(k) << endl; 
	
	// C++������ abs�ε� �Ǽ��� ���밪�� ���� �� �ִ�. => cmath�� include����. 
	cout << "-5.72�� ���밪 : " << abs(-5.72) << endl; 
	cout << "-5�� ���밪 : " << abs(n) << endl; 
	cout << "-50�� ���밪 : " << abs(k) << endl; 
	
	
	cout << endl << "== ������ ���ϱ�==" << endl;
	cout << "2�� 2�� : " << pow(2,2) << endl;
	cout << "3�� 4�� : " << pow(3,4) << endl;
	cout << "4�� 6�� : " << pow(4,6) << endl;
	cout << "8�� 3�� : " << pow(8,3) << endl;
	
	return 0;
}
