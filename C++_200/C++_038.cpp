#include <iostream>
#include <string> // string ����ϸ� �߰��ؾ� �ϴ� ���
 
using namespace std;

int main() {
	
	int n = 0;
	
	while (n<10){
		n++;
		
		if (n%3==0)
			continue;
		else
			cout << "n �� : " << n << endl;
	} 

	return 0;
}
