#include <iostream>
#include <vector>

using namespace std;

// ���� ���� 
class KingInfo {
	public:
		KingInfo() {};
	public:
		void SetValue(const string value) {
			if (value.empty()==false)
				value_ = value;
			else
				cout << "�߸��� ����!!\n"; 
		}
		string GetValue() const {
			if (value_.empty()==false)
				return value_;
			else
				return "������ ���� �ϼ���.";
		}
	private: // �ܺ� ���� �Ұ� 
		string value_;
		int number_; 
};

int main() {
	KingInfo king_info1;
	king_info1.SetValue("���� ���� �̿�");
	
	KingInfo king_info2;
	king_info2.SetValue("���� ���� ��ȣ");
	
	
	// value_ ������ private �Ӽ����� �ܺο��� ���� �Ұ� 
	// king_info1.value_ = "���� ���� ��ȯ" // ����
	
	cout << king_info1.GetValue() << "\n";
	cout << king_info2.GetValue() << "\n";
	
	return 0;
}
