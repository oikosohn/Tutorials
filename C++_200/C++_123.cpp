// type_tratis

#include <iostream>
#include <string> 

using namespace std;

enum TmpEnum { };
enum class TmpEnumClass : int { };

int main() {
	
	cout << boolalpha;
	
	cout << "==is_integral==" << endl;
	cout << is_integral<TmpEnum>::value << endl; 
	cout << is_integral<TmpEnumClass>::value << endl;
	cout << is_integral<singed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl;	
	// F, F, T, T, F, T
	
	
	cout << "==is_enum==" << endl;
	cout << is_enum<TmpEnum>::value << endl;
	cout << is_enum<TmpEnumClass>::value << endl;
	cout << is_enum<int>::value << endl;	
	// T, T, F

	cout << "==is_signed==" << endl;
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<singed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;
	// F, T, F
	
	cout << "==is_unsigned==" << endl;
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl; // int : ¹¬½ÃÀûÀ¸·Î singed int 
	cout << is_unsigned<unsigned int>::value << endl;
	// F, F, T
	
	return 0;
}

