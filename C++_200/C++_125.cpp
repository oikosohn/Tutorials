// type_tratis

#include <iostream>
#include <string> 
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>

string TmpFunc(T1 x, T2 y) {
	typename conditional<is_same<T1, T2>::value, int, double >::type type1;
	return typeid(type1).name();
}

int main() {
	
	string type = TmpFunc(1, 22.3);
	
	if (type == "double")
		cout << "double";
	else
		cout << "not double";
		
	return 0;
}

