#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// �����ʹ� ���α׷� ������ �ø��µ� ������ �ȴ�.
// �Լ��� ���ڷ� �Ѿ���� ���� �����Ͽ� ����Ѵµ� ���ڰ� ũ�ٸ� ���翡 �ҿ�Ǵ� �ð��� �þ��. 
// ������ �ش� �Լ��� ���� ȣ���ϸ� ������ ��������

// ������ ũŰ�� Ŭ���� �����͸� �̿��� �ּҸ� �ѱ�� ���� ����. 

// �ּҸ� ���� �� ������ ������ �޴´�. 
int PointerFunc(vector<string> *info) {
	
	// ���� ũ�� ��ȸ 
	if (info->empty() == true) return 0;
	else return sizeof(info);
}

int main() {
	
	vector<string> message;
	message.push_back("��� �屺");
	message.push_back("ô�ذ�!");
	message.push_back("��ģ �̸���");
	message.push_back("... �����ϱ�?");
	
	cout << "������ ���� ũ�� : " << PointerFunc(&message) << "\n"; // 8
	cout << "���� ���� ũ�� : " << sizeof(message); // 24
	
	return 0;
}
