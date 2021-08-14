#include <iostream>
#include <vector>

using namespace std;

// 

class GoodKing;
class BadKing;

class Info {
	// 전방 선언 : friend 키워드를 사용하면 해당 클래스에서 부모 클래스의 private에 접근 가능
	friend class GoodKing;
	public:
		Info() {};
	private:  
		string achieve;
};

class GoodKing : Info {
	public:
		GoodKing() {
			achieve = "백제 중흥 군주 근초고왕";
		};
		void Display() {
			cout << achieve << "\n";
		}
};

class BadKing : public Info {
	public:
		BadKing() {};
		void Display() {
//			cout << achieve << "\n"; // 오류 
		}
};

int main() {
	GoodKing king1;
	king1.Display();
	
	BadKing king2;
	king2.Display();
	
	return 0;
}
