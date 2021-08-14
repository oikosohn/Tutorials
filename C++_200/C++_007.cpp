#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// 문자 변수는 문자 앞에 쿼테이션('')을 사용한다. 
	char character = 'C';
	int integer = 100;
	
	// 소수점 다룰 때 제한이 없는 double을 사용하자. 
	double precision = 3.14159;
	bool is_true = true;
	
	// 문자열 자료형 string을 사용하기 위해 #include <string>을 사용한다.
	// String은 일반적인 자료형이 아니라 클래스이기 때문에 이와 같은 과정이 필요하다. 
	// 더블쿼테이션("") 사용 
	string word = "Hello World";   
	
	cout << "char : " << character << endl;
	cout << "int : " << integer << endl;
	cout << "double : " << precision << endl;
	cout << "bool : " << is_true << endl;
	cout << "string : " << word << endl;
	
	return 0;
}
