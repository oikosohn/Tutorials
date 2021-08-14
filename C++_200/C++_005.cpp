#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	cout << "1 + 3 = " << one+three << endl;
	cout << "4 - 2 = " << four-two << endl;
	cout << "2 * 3 = " << two*three << endl;
	cout << "4 / 2 = " << four/two << endl;
	
	cout << "2 + 3 * 4 = " << two+three*four << endl;
	cout << "1 + 4 / 2 = " << one+four/two << endl;
	
	return 0;
}
