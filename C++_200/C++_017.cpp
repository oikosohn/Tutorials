#include <iostream>

// 문자열을 사용하기 위해 string 표준 헤더 추가 
#include <string>
using namespace std;

int main() {
	
	string my_country = "korea";
	string my_job = "developer";
	
	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl; 
	
	// string은 + 등을 활용해 직관적으로 문자열을 가공해 사용 가능 
	string my_info = my_country + ", " + my_job;
	
	cout << "My Info : " << my_info << endl;

	return 0;
}
