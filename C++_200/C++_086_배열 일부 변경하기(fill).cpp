#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	// 배열 일부 변경
	 
	int data1[10] {0,}; 
	fill(data1, data1+3, 10); // data[0] ~ data[2] 까지 10 
	fill(data1+4, data1+8, 20); // data[4] ~ data[7] 까지 20 
	
	cout << "== data1 결과 ==" << "\n";
	
	for (int i=0; i<10; i++)
		cout << data1[i] << ", ";
		
	vector<int> data2({0,1,2,3,4,5,6,7});
	fill(data2.begin(), data2.begin()+3, 30); // data[0] ~ data[2] 까지 30 
	
	cout << "\n" << "== data1 결과 ==" << "\n";

	for (int i=0, size=data2.size(); i<size; i++) {
		cout << data2.at(i) << ", ";
	}
	
	return 0;
}
