#include <iostream>     // std::cout
#include <algorithm>    // std::transform

//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string silla = "divided into ther Three Kingdoms";
	string joseon = "Yi seong-gye, established Joseon in 1392.";
	
	// ���ڿ� ��ҹ��� ��ȯ 
	// transform(������ ���ڿ��� ������, ������ ���ڿ��� ������, ����� ���ڿ��� ������, ��ȯ����)  
	// linux g++���� �������ϸ� ���� toupper�� ��ȣ�ؼ� ��Ȯ�ϰ� ĳ�����ؾ� �Ѵ�. 
	transform(silla.begin(), silla.end(), silla.begin(), (int(*)(int))toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), (int(*)(int))tolower);
	 
	// ���� ��ҹ��� ��ȯ 
	char lower_ch = 'g';
	char upper_ch = 'B';
	
	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);
	
	cout << "���ڿ� �빮�ڷ� ��ȯ : " << silla << "\n";
	cout << "���ڿ� �ҹ��ڷ� ��ȯ : " << joseon << "\n";
	cout << "���� �빮�ڷ� ��ȯ : " << lower_ch << "\n";
	cout << "���� �ҹ��ڷ� ��ȯ : " << upper_ch << "\n";
	
	return 0; 
}
