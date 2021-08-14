#include <iostream>

using namespace std;

// class 키워드 class 이름 
class KingInfo {
	public: // 공개된 정보, 외부 접근 허용 
	
		// get, set 함수 따로 두는 이유는 
		// 객체지향 언어의 특성 중 하나인 정보은닉 때문 
		void SetName(string name) {
			name_ = name;
		}
		
		string GetName() const {
			return name_;
		}
	// protected: // 제한된 정보, 해당 클래스나 서브 클래스에서만 접근 허용	
	
	private: // 제한된 정보, 해당 클래스에서만 접근 허용 
		string name_;
};

int main() {
	
	// class 객체 생성 
	KingInfo king_info;
	
	king_info.SetName("조선 세조 이유");
	cout << king_info.GetName();
	
	return 0;
}
