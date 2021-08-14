#include <iostream>     // std::cout
//#include <algorithm>    // std::minmax
//#include <vector>       // std::vector
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand

using namespace std;

// ��� ���� enum
// �̸��� ��ġ�� �� �ȴ�. 
enum Status {
	// enum�� ��ҵ��� ������ ���� ���´�.
	// �� ��Ҵ� ���� ����� ������ �ڵ����� 1�� Ŀ����. 
	normal = 0,
	abnormal, // 1
	disconnect = 100,
	close // 101
};

// enum class�� enum�� �Ѱ踦 �غ��ϱ� 
// ���� �̸��� enum ��Ҹ� ����� �� �ִ�. 
// enum class �����ϰ� char ���·� ����
// �ڷ��� ������� ������ �⺻������ int ���̴�. 
enum class MachinStatus : char { 
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main() {
	
	// enum class�� ����Ϸ��� �̸��� ���� �����ؾ� �Ѵ�. 
	// ���� �̸��� ��Ҹ� ���� ������ ����� �� �ֱ� ������
	// ��� �������� ������� ��Ȯ�ϰ� �˾ƾ� �Ѵ�. 
	MachinStatus machine = MachinStatus::abnormal;
	
	if (machine==MachinStatus::normal) // �� ȣ�� 
		cout << "Status : normal" << "\n";
	else if (machine==MachinStatus::abnormal) // ��� �̸� 
		cout << "Status : abnormal" << "\n";	
	else if (machine==MachinStatus::disconnect) // ���� 
		cout << "Status : disconnect" << "\n";		
	else
		cout << "Status : close" << "\n";		
	
	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << "\n"; 
	
	return 0;
}
