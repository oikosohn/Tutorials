#include <iostream>

using namespace std;
 
 
// Ŭ���� default ������
class Class1 {
	public:
		Class1() = default; // Ŭ���� ���� ������ ��� �ʱ�ȭ 
	public: // ��� ���� 3�� 
		int number; // 0
		double prime; // 0
		string word; // ���� 
}; 

class Class2 {
	public:
		Class2() {}; 
	public:
		int number; // �����Ⱚ 
		double prime; // �����Ⱚ 
		string word; // ���� 
};

int main() {
	
	Class1 *class1 = new Class1(); // ��ü ����, new�� ����ϸ� �޸� �� ������ �Ҵ�ȴ�. 
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << "\n";
	
	Class2 *class2 = new Class2(); // ��ü ���� 
	cout << "Class2 : " << class2->number << ", " << class2->prime << ", " << class2->word << "\n";
	
	return 0;
}
