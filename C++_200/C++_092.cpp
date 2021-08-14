#include <iostream>

using namespace std;

struct Info {
	string country;
	
	struct Who {
		string name;
		string nickname;
	} who;
};

int main() {
	// string 변수와 Who 구조체 영역 분리 
	Info chuck = {"고려", {"장군 척준경", "소드마스터"}};
	// 선언된 순서에 맞춰서 갑이 대입된다. 
	Info anjang = {"고구려", "안장왕 고흥안", "한주 사람"};
	
	cout << chuck.country << ", " << chuck.who.name << chuck.who.nickname << "\n";
	cout << anjang.country << ", " << anjang.who.name << anjang.who.nickname <<  "\n";
	return 0;
}
