#include <iostream>
#include <vector>

using namespace std;

class Ondal {
	public:
		// friend 함수로 선언되어 결과 year_ 출력 가능 
		friend void GetYear(Ondal ondal) {
			cout << "아단성 전투 연도 : " << ondal.year_ << "\n";
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
