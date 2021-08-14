#include <iostream>

using namespace std;

int main() {
	
	int x = 2;
	double y = 4.4;
	
	// ĳ��Ʈ ���� 
	int i = static_cast<int>(y/x); // ���� �⺻���� ĳ��Ʈ ���
	 
	// dynamic_cast<> : ��ü���� ����� �������� �̿��� ��ȣ�� Ÿ�� ĳ���� ���� ����
	// const_cast<> : �ڷ����� ���� �ִ� ��� �Ӽ� ����
	// reinterpret_cast<> : ��� ������ Ÿ�Գ����� ��ȯ�� �� �ְ� ����
	 
	
	 
	// �׷��� �Ʒ��� ���� C��� ��Ÿ�� ����ȯ�� 
	// �ƹ� ���ǵ� ���� ������ �����ϴ� ������ �ִ�.
	// ������ �Ұ����� ���� ������ �õ��� ����ġ ���� ������ �߻� ���� 
	int j = (int) y / x; // �������� �ڷ��� ���� ���
	
	double k = y / x;
	
	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) "  << j << endl;
	cout << "4.4 / 2 = " << k << endl;
	
	return 0;
}
