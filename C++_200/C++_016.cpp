#include <iostream>
#include <vector>
using namespace std;

int main() {
	// char �ڷ��� : ���� ����, �ƽ�Ű �ڵ� ���� ���� ���ڷ� �� �Ҵ� ����
	// char ���� : -127 ~ +127
	// unsigned char ���� : 0 ~ +255 
	
	// �ƽ�Ű �ڵ�
	// Ư������ : 33 ~ 47, 58 ~ 64, 91 ~ 96, 123 ~ 126 
	// ���� : 48 ~ 57
	// �빮�� : 65 ~ 90
	// �ҹ��� : 97 ~ 122 
	char ch1 = 'c';
	char ch2 = 200;
	
	unsigned char ch3 = 'c';
	unsigned char ch4 = 200;
	
	printf("char ch1 = %c, %d\n", ch1, ch1);
	
	// char ���� ���� �ʰ� : ���� ���� 
	// 128-200 = -72�� char�� �ּ� ���� -127���� 72�� ������ -56 ��� 
	printf("char ch2 = %c, %d\n", ch2, ch2);  
	
	// signed char c1�� �Ȱ��� ���� ���� ���̴�. 
	printf("char ch3 = %c, %d\n", ch3, ch3);
	
	// unsigned char ������ ���ϴ� 200 �Ҵ�޾� ���� ���� ��µǳ�
	// 200�� �ش��ϴ� �ƽ�Ű ���� ���� ����ǥ�� ��µȴ�. 
	printf("char ch4 = %c, %d\n", ch4, ch4);

	return 0;
}
