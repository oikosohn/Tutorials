#include <iostream>
#include <vector>

using namespace std;

// ��� : ���� ��� ���� 
class Info{
	public:
		Info() {};
	public:
		string name_;
		int year_;
};

// public Info == Info ��ҵ��� public���� ����Ѵٴ� �ǹ� 
class Goodking : public Info {
	public:
		Goodking(const string country) : country_(country) {};
		void Display() {
			cout << country_ << " " << name_ << " ���� ���� BC : " << year_ << "\n"; 
		}
	private:
		string country_;
};

class Badking : public Info {
	public:
		Badking(const string country) : country_(country) {};
		void Display() {
			cout << country_ << " " << name_ << " ���� ���� BC : " << year_ << "\n"; 
		}
	private:
		string country_;
};

int main() {
	Goodking king1("������");
	king1.name_ = "�ܱ��հ�";
	king1.year_ = 2333;
	
	Badking king2("���");
	king2.name_ = "������";
	king2.year_ = 1330;
	
	king1.Display();
	king2.Display(); 
	
	return 0;
}
