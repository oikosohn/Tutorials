#include <iostream>
#include <vector>

using namespace std;

// 

class GoodKing;
class BadKing;

class Info {
	// ���� ���� : friend Ű���带 ����ϸ� �ش� Ŭ�������� �θ� Ŭ������ private�� ���� ����
	friend class GoodKing;
	public:
		Info() {};
	private:  
		string achieve;
};

class GoodKing : Info {
	public:
		GoodKing() {
			achieve = "���� ���� ���� ���ʰ��";
		};
		void Display() {
			cout << achieve << "\n";
		}
};

class BadKing : public Info {
	public:
		BadKing() {};
		void Display() {
//			cout << achieve << "\n"; // ���� 
		}
};

int main() {
	GoodKing king1;
	king1.Display();
	
	BadKing king2;
	king2.Display();
	
	return 0;
}
