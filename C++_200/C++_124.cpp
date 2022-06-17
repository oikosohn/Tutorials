// type_tratis

#include <iostream>
#include <map>
#include <string> 

using namespace std;

struct TmpStruct {
	int x = 0;
};

class TmpClass {
};


int main() {
	
	cout << boolalpha;
	
	cout << "==is_empty==" << endl;
	cout << is_empty<TmpStruct>::value << endl; 
	cout << is_empty<TmpClass>::value << endl;	
	// F, T
	
	
	cout << "==is_array==" << endl;
	cout << is_array<TmpStruct>::value << endl;
	cout << is_array<map<int, double>>::value << endl;
	cout << is_array<int[3]>::value << endl;	
	// F, F, T
	// map, vector ���� �����̳ʴ� ���ø� Ŭ������ �����̱� ������ �迭�� �ƴ� 

	cout << "==is_same==" << endl;
	cout << is_same<TmpStruct, TmpClass>::value << endl;
	cout << is_same<int, signed int>::value << endl;
	cout << is_same<char, unsigned char>::value << endl;
	// F, T, F
	
	return 0;
}

