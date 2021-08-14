#include <iostream>

using namespace std;
 
 
// Ŭ���� ���� ������ ���� 
class KingInfo {
	public: // ������ ����, �ܺ� ���� ��� 
		// ���ڰ� ���� class ������
		KingInfo() { 
			// ��ü ������ �� name_�� �����ڿ� ���� �ʱ�ȭ�ȴ�. 
			value_ = "���� ���� ����";
		};
		
		// ���ڰ� ���ڿ��� class ������ 
		KingInfo(const string value) {
			value_ = value;
		} 
		
		// ���ڰ� ������ class ������ 
		KingInfo(const int value) {
			value_ = "���걺 �������� : ";
			value_ += to_string(value); 
		}
	
	public: 
		string GetValue() const {
			return value_;
		}
		
	// protected: // ���ѵ� ����, �ش� Ŭ������ ���� Ŭ���������� ���� ���	
	
	private: // ���ѵ� ����, �ش� Ŭ���������� ���� ��� 
		string value_;
};

int main() {
	
	// class ��ü ����
	// ��ü���� ������ �� ���ڸ� �ٸ��� �ξ� ���� ȣ���ϴ� �����ڰ� �ٸ���.
	// GetValue�� ȣ�������� ��ü ���� �� ȣ���� �����ڰ� �ٸ��Ƿ� ��µǴ� ���� �ٸ���. 
	KingInfo king_info1;
	KingInfo king_info2("���� ���걺 ����");
	KingInfo king_info3(1494);
	
	cout << king_info1.GetValue() << "\n";
	cout << king_info2.GetValue() << "\n";
	cout << king_info3.GetValue() << "\n";
	
	return 0;
}
