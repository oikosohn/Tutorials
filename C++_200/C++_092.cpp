#include <iostream>

using namespace std;

struct Info {
	string country;
	
	struct Who {
		string name;
		string nickname;
	} who;
};

int main() {
	// string ������ Who ����ü ���� �и� 
	Info chuck = {"���", {"�屺 ô�ذ�", "�ҵ帶����"}};
	// ����� ������ ���缭 ���� ���Եȴ�. 
	Info anjang = {"����", "����� �����", "���� ���"};
	
	cout << chuck.country << ", " << chuck.who.name << chuck.who.nickname << "\n";
	cout << anjang.country << ", " << anjang.who.name << anjang.who.nickname <<  "\n";
	return 0;
}
