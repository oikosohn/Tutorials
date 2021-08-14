#include <iostream>
#include <vector>

// #inclue <파일 이름> : C++ 기본 라이브러리 사용 
// #inclue "경로와 파일 이름" : 사용자가 만든 파일 참조 

using namespace std;

int main() {
	
	vector<int> exam;
	exam.push_back(10);
	exam.push_back(20);
	exam.push_back(30);
	
	for (int i=0, size=exam.size(); i< size; i++) { 
		cout << "벡터 값 : " << exam.at(i) << endl;
	}
	
	for (int i=0; i< exam.size(); i++) { 
		cout << "벡터 값 : " << exam.at(i) << endl;
	}
	return 0;
}
