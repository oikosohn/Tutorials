#include <iostream>
#include <vector>

using namespace std;

class Ondal {
	public:
		// friend �Լ��� ����Ǿ� ��� year_ ��� ���� 
		friend void GetYear(Ondal ondal) {
			cout << "�ƴܼ� ���� ���� : " << ondal.year_ << "\n";
		}
		
		void SetYear(int year) {
			year_ = year;
		}
	private:
		int year_;
};
int main() {
	Ondal ondal;
	ondal.SetYear(590);
	
	GetYear(ondal);
	
	return 0;
}
