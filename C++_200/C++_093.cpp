#include <iostream>
#include <fstream>
 
using namespace std;

int main() {
	ifstream read;
	
	// ANSI로 저장해야 읽힘 
	// ifstream::in : 열기 모드 
	read.open("093.txt", ifstream::in);
	
	// 파일의 첫 문자 한 개를 읽는다. 
	char line = read.get();
	
	// 파일을 끝까지 다 읽을 때까지 한 문자씩 출력한다. 
	while (read.eof()==false) {
		cout << line;
		line = read.get();
	}
	
	cout << "\n";
	
	// 연 파일을 닫는다
	// 파일을 닫지 않으면 다른 프로세스가 점유한 상태가 유지되기
	// 때문에 별도로 파일을 열어 수정할 수 없다. 
	read.close();
	
	return 0;
}
