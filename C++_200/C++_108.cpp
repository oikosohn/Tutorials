#include <iostream>

using namespace std;
 
class TmpClass {
	public: 
		// Ŭ���� ������ �ʱ�ȭ ����Ʈ���� ���� �ʱ�ȭ
		// �����ڰ� ȣ��Ǵ� ������ ���� ���� �����ϱ� ������ ���� ���� �����ϰ� ���ο� ������ �Ҵ�ȴ�. 
		TmpClass() : number1(10), number2(20), name("���� : ���ڸ�� �̸�") {}
	
	void Print() {
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << "\n";
	}
	
	private: // ���� �� 
		int number1 = 1;
		const int number2 = 2;
		static const int number3 = 3;
		string name = "���� : ����� �Ƶ�";	
};

int main() {
	
	TmpClass tc;
	tc.Print(); // 10, 20, 3 ���� : ���ڸ�� �̸� 
	return 0;
}
