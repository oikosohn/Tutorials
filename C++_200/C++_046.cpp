#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double x = 5.7;
	int div1 = static_cast<int>(x/5); // �Ҽ��� ������, static_cast�� ������ ��ȯ�Ѵ�. 
	double mod1 = x - int(x) * static_cast<int>(x/5);
	
	int y = 10;
	// ������ ������ ���� ���� �������� �߻��� �� �־� Ÿ�� ĳ������ �� int ������ ��ȯ�Ѵ�. 
	int div2 = static_cast<int>(y/2);
	double mod2 = y % 2;
	
	cout << "5.7 / 5 = �� : " << div1 << ", ������" << mod1 << endl;
	cout << "10 / 2 = �� : " << div2 << ", ������" << mod2 << endl;
	
	// C++���� ������ ������ �������� �����ϴ�. 
	// �ε��Ҽ����� �������� �ʾұ� ������ ������ ������ ���� �ʴ´�. 
	// ���̽㿡���� 5.7%5�� �ϸ� 0.7000000000000002 ���� ���� ���´�. 
//	cout << "5.7 / 5 = �� : " << int(5.7/5.0) << ", ������" << 5.7%5.0 << endl;
	cout << "10 / 2 = �� : " << int(10/2) << ", ������" << 10%2 << endl;

	
	return 0;
}
