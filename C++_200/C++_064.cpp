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
		// ss는 처음 데이터를 읽고 다시 처음으로 돌아가 데이터를 읽기 때문에
		// ignore를 호출하여 다음 데이터를 읽도록 한다.
		// 만약 ignore를 호출하지 않는다면 첫 데이터를 계속 읽어서 무한루프에 빠진다. 
		ss >> number1;
		ss.ignore();
		
		cout << number1 << ", ";
	}
	// 현재 상태 정리, 파일을 끝까지 읽어서 더는 읽을 수 없는 상태인데 이를 초기화한다. 
	ss.clear();
	
	// ss 변수의 데이터 초기화 
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
