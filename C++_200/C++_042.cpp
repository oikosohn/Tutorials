#include <iostream>
#include <string> // string 사용하면 추가해야 하는 헤더
 
using namespace std;

int main() {
	
	int offset = 4;
	
	// i는 단을 출력, offset(4)까지 출력
	for (int i=1, j = 0; i<=offset; i++, j=0){ // j를 0으로 초기화  
		for (int k=1; k<=offset-i; k++)
			cout << "  ";
		while (j!=2*i-1){ // j == 별 출력 횟수 
		 cout << "* ";
		 j++;
		}
		cout << endl;
	}
	return 0;
}
