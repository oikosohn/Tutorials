#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 배열 일부 변경
	 
	int data1[10] {0,}; 
	fill_n(data1, 2, 10); // data[0] ~ data[1] 까지 10 
	fill_n(data1+4, 3, 20); // data[4] ~ data[6] 까지 20 
	
	cout << "== data1 결과 ==" << "\n";
	
	for (int i=0; i<10; i++)
		cout << data1[i] << ", ";
		
	vector<int> data2({0,1,2,3,4,5,6,7});
	fill_n(data2.begin(), data2.size()-1, 30); // data[0] ~ data[7] 까지 30 
	fill_n(data2.begin(), 4, 40); // data[0] ~ data[3] 까지 40 
	
	cout << "\n" << "== data1 결과 ==" << "\n";

	for (int i=0, size=data2.size(); i<size; i++) {
		cout << data2.at(i) << ", ";
	}
	
	return 0;
}
