#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;
	
	// ��ȯ���� ������ �Ҽ�
	// div ������ �ּҸ� �Ѱ� ���� ���� ����ȴ�.
	// div ������ �ּҸ� �ѱ�� ������ �Ʒ� �Լ����� ���� �����ϸ� �Լ� ȣ�� ���� �ۿ����� ���� ��ȿ�ϴ�. 
	mod = modf(x, &div);
	
	cout << "1.2345�� �� : " << div << ", ������ : " << mod << endl;
	
	return 0;
}
