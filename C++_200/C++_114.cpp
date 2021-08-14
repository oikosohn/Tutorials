#include <iostream>
#include <vector>

using namespace std;

// 상속 : 공통 요소 집합 
class Info{
	public:
		Info() {};
	public:
		string name_;
		int year_;
};

// public Info == Info 요소들을 public으로 사용한다는 의미 
class Goodking : public Info {
	public:
		Goodking(const string country) : country_(country) {};
		void Display() {
			cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << "\n"; 
		}
	private:
		string country_;
};

class Badking : public Info {
	public:
		Badking(const string country) : country_(country) {};
		void Display() {
			cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << "\n"; 
		}
	private:
		string country_;
};

int main() {
	Goodking king1("고조선");
	king1.name_ = "단군왕검";
	king1.year_ = 2333;
	
	Badking king2("고려");
	king2.name_ = "충혜왕";
	king2.year_ = 1330;
	
	king1.Display();
	king2.Display(); 
	
	return 0;
}
