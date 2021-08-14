#include <iostream>
#include <vector>

using namespace std;

// 캡슐화 : 용도가 비슷한 데이터를 모아 이용, 재활용성 향상, 정보 은닉 
class KingInfo {
	public:
		KingInfo() {};
	public:
		// 정보은닉 
		void SetValue(const string name, const string son, int ascend) {
			name_ = name;
			son_ = son;
			ascend_ = ascend; 
		}
		// 이하 캡슐화 
		string GetNameSon() const {
			return name_ + "의 아들 " + son_;
		}
		string GetNameAscend() const {
			return name_ + " 즉위 연도 " + to_string(ascend_) + "년";
		}
	private: // 외부 접근 불가 
		string name_;
		string son_;
		int ascend_; 
};

int main() {
	KingInfo king_info;
	king_info.SetValue("선조","광해군",1567);
	
	cout << king_info.GetNameSon() << "\n";
	cout << king_info.GetNameAscend() << "\n";
	
	return 0;
}
