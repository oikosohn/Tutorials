#include <iostream>

using namespace std;
 
 
// 클래스 복수 생성자 정의 
class KingInfo {
	public: // 공개된 정보, 외부 접근 허용 
		// 인자가 없는 class 생성자
		KingInfo() { 
			// 객체 생성될 때 name_는 생성자에 의해 초기화된다. 
			value_ = "조선 성종 이혈";
		};
		
		// 인자가 문자열인 class 생성자 
		KingInfo(const string value) {
			value_ = value;
		} 
		
		// 인자가 정수인 class 생성자 
		KingInfo(const int value) {
			value_ = "연산군 즉위연도 : ";
			value_ += to_string(value); 
		}
	
	public: 
		string GetValue() const {
			return value_;
		}
		
	// protected: // 제한된 정보, 해당 클래스나 서브 클래스에서만 접근 허용	
	
	private: // 제한된 정보, 해당 클래스에서만 접근 허용 
		string value_;
};

int main() {
	
	// class 객체 생성
	// 객체들은 생성될 때 인자를 다르게 두어 서로 호출하는 생성자가 다르다.
	// GetValue를 호출하지만 객체 생성 시 호출한 생성자가 다르므로 출력되는 값도 다르다. 
	KingInfo king_info1;
	KingInfo king_info2("조선 연산군 이융");
	KingInfo king_info3(1494);
	
	cout << king_info1.GetValue() << "\n";
	cout << king_info2.GetValue() << "\n";
	cout << king_info3.GetValue() << "\n";
	
	return 0;
}
