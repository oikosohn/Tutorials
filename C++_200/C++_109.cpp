#include <iostream>
#include <vector>

using namespace std;
 
class TmpClass {
	public: 
		TmpClass() {
			cout << "������ ȣ��\n";
		}
		// Ŭ���� �Ҹ��� 
		~TmpClass() {
			cout << "�Ҹ��� ȣ��\n";
		}
};

int main() {
	
	// new -> delete -> null
	// alloc -> free
	
	// ��ü�� ���ð� ������ ����
	// �����͸� �̿��� new Ű����� ��ü �����ϸ� ������ �ƴ� �� ������ �Ҵ�ȴ�. 
	// delete Ű����� �Ҹ��� ����� ���� �� ������ �Ҵ�
	TmpClass *tmp_class = new TmpClass();
	
	// Ŭ���� ����  
	delete tmp_class;
	
	// �Ҵ�� �޸𸮴� �ݵ�� ��������� ������ �޸� ������ �����ؾ� �Ѵ�. 
	tmp_class = nullptr; 
	return 0;
}
