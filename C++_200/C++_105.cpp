#include <iostream>

using namespace std;

// class Ű���� class �̸� 
class KingInfo {
	public: // ������ ����, �ܺ� ���� ��� 
		
		// class ������
		// ������ �̸��� Ŭ���� �̸��� �Ȱ����� ���ϰ��� ���ڴ� ���� ���� ���� ���� �ִ�. 
		KingInfo() { 
			// ��ü ������ �� name_�� �����ڿ� ���� �ʱ�ȭ�ȴ�. 
			name_ = "���� ���� ��Ȳ";
		};
	
	public: string GetName() const {
		return name_;
	}
		
	// protected: // ���ѵ� ����, �ش� Ŭ������ ���� Ŭ���������� ���� ���	
	
	private: // ���ѵ� ����, �ش� Ŭ���������� ���� ��� 
		string name_;
};

int main() {
	
	// class ��ü ���� 
	KingInfo king_info;
	
	cout << king_info.GetName();
	
	return 0;
}
