#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ����ü�� ���� �ڷ����� �ϳ��� ���� ��� ���� 
struct Princess {
	string name;
	string father;
	string birthday = "�� �� ����"; 
} Goryeo[2]; // ����ü �迭 ����   

int main() {
	
	Princess jm;
	jm.name = "�������";
	jm.father = "���� ����";
	jm.birthday = "1603�� 6�� 27��";
	
	Goryeo[0].name = "��������";
	Goryeo[0].father = "��� ����";
	Goryeo[1].name = "ȿ������";
	Goryeo[1].father = "��� ����";
	
	cout << "== ���� ���� == " << "\n";
	cout << jm.name << "\n";
	cout << jm.father << "\n";
	cout << jm.birthday << "\n\n"; 

	cout << "== ��� ���� == " << "\n";
	cout << Goryeo[0].name << "\n";
	cout << Goryeo[0].father << "\n";
	cout << Goryeo[0].birthday << "\n\n"; 
	cout << Goryeo[1].name << "\n";
	cout << Goryeo[1].father << "\n";
	cout << Goryeo[1].birthday << "\n"; 			 
	
	return 0;
}
