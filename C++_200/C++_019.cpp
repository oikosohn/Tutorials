#include <iostream>

#include <string>
using namespace std;


int main() {
	
	// double�� float ���� ���� ���� �÷ο�, ��� �÷ο� ������ ����
	// �ǵ����� ���� ���� ���� �� �ִ�. => double�� ����� 
	
	
	// double : �Ҽ��� 15�ڸ� => �ַ� double ����Ѵ�. 
	// ũ�� : 8����Ʈ, ���� : -1.7E308 ~ +1.7E308 
	double pi_d = 3.14;
	
	// float : �Ҽ��� 7�� 
	// ũ�� : 4����Ʈ, ���� : -3.4E38 ~ +3.4E38 
	
	// ��ǻ�ʹ� �Ǽ��� �⺻������ 8����Ʈ double�� �����Ѵ�.
	// �׷��� ������ f�� �ٿ��� ��� �޽����� �߻����� �ʴ´�. 
	float pi_f = 3.14f; 
	
	cout << "pi_d : " << pi_d << endl;
	cout << "pi_f : " << pi_f << endl; 
	
	return 0;
}
