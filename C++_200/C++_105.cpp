#include <iostream>

using namespace std;

// class 키워드 class 이름 
class KingInfo {
	public: // 공개된 정보, 외부 접근 허용 
		
		// class 생성자
		// 생성자 이름은 클래스 이름과 똑같으며 리턴값과 인자는 있을 수도 없을 수도 있다. 
		KingInfo() { 
			// 객체 생성될 때 name_는 생성자에 의해 초기화된다. 
			name_ = "조선 예종 이황";
		};
	
	public: string GetName() const {
		return name_;
	}
		
	// protected: // 제한된 정보, 해당 클래스나 서브 클래스에서만 접근 허용	
	
	private: // 제한된 정보, 해당 클래스에서만 접근 허용 
		string name_;
};

int main() {
	
	// class 객체 생성 
	KingInfo king_info;
	
	cout << king_info.GetName();
	
	return 0;
}
