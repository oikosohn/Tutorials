#include <iostream>     // std::cout
//#include <algorithm>    // std::random_shuffle
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main() {
	
	string jinduk_name = "��¸�";
	string jinsung_name = "kim man";
	
	// ���ڿ� ���� ���ϱ�
	// ���ĺ��� ��ҹ��� 52���� 0~127���� ������ �ƽ�Ű ���ڷ� ǥ�� ����
	// �ѱ��� �ʼ�, �߼�, ���� �� ���� 1�� ���� �Ѿ 1����Ʈ �ƽ�Ű ���ڷ� ǥ�� �Ұ���
	// 0~65,535 ���� ǥ�� ������ 2����Ʈ�� �� ���ڸ� ��´�.
	// �ѱ��� ������ ���� ���ڿ� ���̰� �� ��� �þ��. 
	cout << "�������� �̸� ���� : " << jinduk_name.length() << "\n";
	cout << "�������� �̸� ���� : " << jinsung_name.length() << "\n";
	
	return 0; 
}
