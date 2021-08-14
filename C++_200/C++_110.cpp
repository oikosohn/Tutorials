#include <iostream>
#include <vector>

using namespace std;
 
class Info {
	public:
		// Ŭ���� ������ 
		Info() {
			// ������ ���� ���� �޸� �Ҵ��� �̷��� 
			data = new int;
			data_arr = new int[3];
		}
		// Ŭ���� �Ҹ��� : ���� �Ҵ�� �޸� ����
		~Info() {
			delete data;
			delete[] data_arr;
		}
		// ���� �Ҵ�� �޸� ���� 
		void Dispose() {
			delete data;
			delete[] data_arr;
		}
	
	// ���� �޸� �Ҵ��� �ϸ� ���� ��ü�� ���ÿ� ������
	// ����Ű�� �޸𸮴� ���� �ֱ� ������ *�� �ٿ��� �Ѵ�.	
	private:
		int* data;
		int *data_arr;
};

int main() {
	
	// ��ü ���� ������ �����ڸ� ���� ���� �Ҵ��� �߻�
	// �� ������ �� ������ ���� ���� �Ҵ��. 
	Info *info = new Info();
	
	// �� ������ ����ϴ� �޸� ���� ��ȯ 
	info->Dispose();
	
	// ���� �߻� : ������ �޸� ���� �ٽ� ���� �õ��ؼ�
	// �̹� ������ �����̱� ������ �� ���� ��� ����Ű���� ���� ���� �߻�  
	delete info;
	
	// �޸� ����
	// ���� : ����ó�� ������ ������ ũ�Ⱑ �����Ǵ� ��ҵ��� �Ҵ�Ǵ� ���� 
	// ���̳ʸ� : static, ���� ��ҵ��� �Ҵ�Ǵ� ���� 
	// �� : �������� �޸� �Ҵ�Ǵ� ����, ���� ���� �� ���α׷� ���� ��Ȳ�� ���� �޸𸮰� �Ҵ�/����
	
	// ������ ���� or ���� �մ� 
	// �Լ� ���ο� ����� ���������� ������ �Ҵ�ǰ� �����ȴ�. 
	return 0;
}