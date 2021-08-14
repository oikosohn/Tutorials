#include <iostream>
#include <fstream>
 
using namespace std;

int main() {
	ifstream file;
	
	// ANSI로 저장해야 읽힘 
	// ifstream::in : 열기 모드 
	file.open("093.txt", ifstream::in);
	
	string line;
	
	// getline 함수를 이용해 한 줄씩 읽어 line 변수에 저장
	// 한 줄씩 읽다가 내용이 더 없다면 while문 종료 
	while (getline(file, line)) {
		cout << line << "\n";
	}
	
	// 연 파일을 닫는다
	// 파일을 닫지 않으면 다른 프로세스가 점유한 상태가 유지되기
	// 때문에 별도로 파일을 열어 수정할 수 없다. 
	file.close();
	
	return 0;
}
