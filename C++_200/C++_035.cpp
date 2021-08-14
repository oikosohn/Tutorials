#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더 
using namespace std;

int main() {
	
	string str = "The Jin state was formed in souther Korea by the 3rd centruy BC";
	
	char find = 'a';
	
	int size = str.size();
	int cnt = 0;
	
	for (int i=0; i<size; i++) {
		if (str[i]==find)
			cnt ++;
	}
	
	cout << "문장의 a 개수는 " << cnt << "개 입니다." << endl;
	return 0;
}
