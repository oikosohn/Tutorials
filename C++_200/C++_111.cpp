#include <iostream>
#include <vector>

using namespace std;

// static Ŭ���� : ���α׷� ��𼭳� ���� ����, �ܹ߼� ��� ��� ��Ƶα� ����. 
// ������ �ʿ� ���� �����ͳ� �ܼ� �������� ����� ��� ���� ����� �ִٸ� static Ŭ������ ��Ƶ���. 
static class Calculator {
	public:
		// ������ ������� ����� ���� ���길 ���� 
		int Plus(const int x, const int y) const {
			return x+y;
		}
} calc; // static Ŭ������ �̿��Ϸ��� �ش� Ŭ������ ����Ű�� ���� �ʿ��ϴ�. 

int main() {
	cout << "1 + 2 = " << calc.Plus(1,2);
	return 0;
}
