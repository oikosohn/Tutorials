#include <iostream>
#include <string>

using namespace std;

int main() {
		
	string publisher = "정보문화사";
	string language = "C++";
	
	int x = 10;
	int y = 10;
	
	if (publisher != language)
		cout << "두 문장은 같지 않다." << endl;
	else
		cout << "두 문장은 같다." << endl;
		
	if (x>=y)
		cout << "x는 y보다 크거나 같다." << endl;
	else
		cout << "x는 y보다 크거나 같지 않다." << endl;
	
	if (x<=20)
		cout << "x는 20보다 작거나 같다" << endl;
	else
		cout << "x는 20보다 작거나 같지 않다." << endl;
	
	return 0;
}
