#include <iostream>
#include <string>

using namespace std;

// ���ӽ����̽� ���� 
// ���ӽ����̽��� ������ �Լ��� �ش� ���������� ��ȿ�ϵ��� �����Ѵ�. 

namespace silla {
	int year = 935;
	
	void CentralArea(){
		cout << "���"<< endl;
	}
} 

namespace baekjae {
	int year = 660;
	
	void CentralArea(){
		cout << "��û��" << endl;
	}
}

// using Ű���� ����� ���ӽ����̽� ��� ���� 
// ���� �̸��� ������ �Լ��� ����ϴµ� ���α׷����� ������ �߻����� �ʴ´�. 
using namespace silla;
using namespace baekjae;

int main() {
	
	// ���ӽ����̽��� ����ϸ� ���� ������ �Լ��� ������ ������ ���� �ٸ� ���� �Ҵ��� ����� �� �ִ�. 
	// �ҽ� �ڵ� ������������ ȿ�����̴�. 
	cout << "�Ŷ��� �߽���:  ";
	silla::CentralArea();
	
	cout << "�Ŷ� ������� : " << silla::year << endl;
	
	cout << "���� �߽��� : ";
	baekjae::CentralArea();
	
	// ���ӽ����̽� ���������� ��ȿ�� ������ �Լ��� ��������� baekjae::year�� ���� ��� ���� 
	cout << "���� ������� : " << baekjae::year << endl;
	return 0;
}
