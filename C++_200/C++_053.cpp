#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string seven_war = "임진왜란";
	string korea_war = "한국전쟁";
	
	// 같은 문자열이면 0 리턴
	// 다른 문자열이면 -1 리턴 
	if (seven_war.compare(korea_war)==0)
		cout << "같은 문자열";
	else
		cout << "다른 문자열";
	
	return 0; 
}
