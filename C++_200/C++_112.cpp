#include <iostream>
#include <vector>

using namespace std;

// 정보 은닉 
class KingInfo {
	public:
		KingInfo() {};
	public:
		void SetValue(const string value) {
			if (value.empty()==false)
				value_ = value;
			else
				cout << "잘못된 인자!!\n"; 
		}
		string GetValue() const {
			if (value_.empty()==false)
				return value_;
			else
				return "설정을 먼저 하세요.";
		}
	private: // 외부 접근 불가 
		string value_;
		int number_; 
};

int main() {
	KingInfo king_info1;
	king_info1.SetValue("조선 중종 이역");
	
	KingInfo king_info2;
	king_info2.SetValue("조선 인종 이호");
	
	
	// value_ 변수는 private 속성으로 외부에서 접근 불가 
	// king_info1.value_ = "조선 명종 이환" // 에러
	
	cout << king_info1.GetValue() << "\n";
	cout << king_info2.GetValue() << "\n";
	
	return 0;
}
