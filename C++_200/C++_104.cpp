#include <iostream>

using namespace std;

// class Ű���� class �̸� 
class KingInfo {
	public: // ������ ����, �ܺ� ���� ��� 
	
		// get, set �Լ� ���� �δ� ������ 
		// ��ü���� ����� Ư�� �� �ϳ��� �������� ���� 
		void SetName(string name) {
			name_ = name;
		}
		
		string GetName() const {
			return name_;
		}
	// protected: // ���ѵ� ����, �ش� Ŭ������ ���� Ŭ���������� ���� ���	
	
	private: // ���ѵ� ����, �ش� Ŭ���������� ���� ��� 
		string name_;
};

int main() {
	
	// class ��ü ���� 
	KingInfo king_info;
	
	king_info.SetName("���� ���� ����");
	cout << king_info.GetName();
	
	return 0;
}
