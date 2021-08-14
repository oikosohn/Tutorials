#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// 파일 모드 생략하면 ifstream::in으로 설정 
	
	const string file_name = "096.txt";
	
	// 파일 새로 생성 
	// 파일이 존재하면 기존 내용 삭제하고 새롭게 생성 
	// ifstream::out == 쓰기 모드 
	ofstream file_out;
	file_out.open(file_name, ifstream::out);
	
	file_out << "고구려 유리왕과 황조가" << "\n";
	file_out << "사랑의 아픔을 승화한 시" << "\n";
	
	file_out.close();
	
	ifstream file_in;
	file_in.open(file_name, ifstream::in);
	
	string line;
	while (getline(file_in, line)) {
		cout << line << "\n";
	}
	
	file_in.close();
	
	return 0;
}
