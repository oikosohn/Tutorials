#include <iostream>     // std::cout
#include <sstream>

//#include <vector>       // std::vector
//#include <algorithm>    // std::transform
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	stringstream ss;
	
	double number1 = 0.0;         
	
	ss << "1.2,2.6-3.8!4.7=8.9";
	
	cout << "== stirng to doulbe == " << "\n";
	
	while (!ss.eof()) {
		// ss�� ó�� �����͸� �а� �ٽ� ó������ ���ư� �����͸� �б� ������
		// ignore�� ȣ���Ͽ� ���� �����͸� �е��� �Ѵ�.
		// ���� ignore�� ȣ������ �ʴ´ٸ� ù �����͸� ��� �о ���ѷ����� ������. 
		ss >> number1;
		ss.ignore();
		
		cout << number1 << ", ";
	}
	// ���� ���� ����, ������ ������ �о ���� ���� �� ���� �����ε� �̸� �ʱ�ȭ�Ѵ�. 
	ss.clear();
	
	// ss ������ ������ �ʱ�ȭ 
	ss.str("");

	ss << "1, " << "2" << 3 << " " << 4 ;
	
	int number2 = 0;
	
	cout << "\n" << "== string to int == " << "\n";
	
	while (!ss.eof()) {
		ss >> number2;
		ss.ignore();
		
		cout << number2 << ", ";
	}
	
	return 0;           
}
