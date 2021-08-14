#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream stream;
	stream.open("096.txt");
	
	// stream.good()==true : 파일 정상 호출되었을 때 
	if (stream.good()==true)
		cout << "파일 존재";
	else
		cout << "파일 부재"; 
	
	// 파일을 다룰 땐 반드시 close 함수 사용 
	stream.close(); 
	
	return 0;
}
