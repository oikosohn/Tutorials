#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	// 파일 모드 생략하면 ifstream::in으로 설정 
	ifstream ifs("093.txt");
	stringstream ss;
	ss << ifs.rdbuf();
	ifs.close();
	
	string read = "";
	
	cout << "== !ss.eof ==" << "\n";
	while (!ss.eof()) {
		// ss에 저장된 문자열을 read에 할당하고 출력
		// 띄어쓰기, 특수문자 등을 만나기 전까지의 텍스트를 한 단위로 처리한다. 
		ss >> read;
		cout << read << "\n";
	}
	
	// stringstream의 모든 데이터를 문자열로 변환해 string에 담는다. 
	cout << "\n" << "== !ss.str() ==" << "\n";
	read = ss.str();
	cout << read << "\n";
	
	return 0;
}
