#include <iostream>
#include <vector>

using namespace std;

// ĸ��ȭ : �뵵�� ����� �����͸� ��� �̿�, ��Ȱ�뼺 ���, ���� ���� 
class KingInfo {
	public:
		KingInfo() {};
	public:
		// �������� 
		void SetValue(const string name, const string son, int ascend) {
			name_ = name;
			son_ = son;
			ascend_ = ascend; 
		}
		// ���� ĸ��ȭ 
		string GetNameSon() const {
			return name_ + "�� �Ƶ� " + son_;
		}
		string GetNameAscend() const {
			return name_ + " ���� ���� " + to_string(ascend_) + "��";
		}
	private: // �ܺ� ���� �Ұ� 
		string name_;
		string son_;
		int ascend_; 
};

int main() {
	KingInfo king_info;
	king_info.SetValue("����","���ر�",1567);
	
	cout << king_info.GetNameSon() << "\n";
	cout << king_info.GetNameAscend() << "\n";
	
	return 0;
}
