#include <iostream>
#include <bitset>

using namespace std;

int main() {
	
	// C++�� char�� 8��Ʈ(1����Ʈ) ���� 
	
	bitset<8> bit1; // 8��Ʈ�� 1����Ʈ 
	bit1.reset(); // 0000 0000
	bit1 = 127; // 0111 1111
	
	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 32 == 0010 0000
	
	bitset<8> bit3 = bit1 & bit2;
	bitset<8> bit4 = bit1 | bit2;
	bitset<8> bit5 = bit1 ^ bit2;
	bitset<8> bit6 = ~bit1;
	bitset<8> bit7 = bit2 << 1; // ��� ��Ʈ�� n��ŭ ������ ����Ʈ 
	bitset<8> bit8 = bit2 >> 1;// ��� ��Ʈ�� n��ŭ ���� ����Ʈ 
	
	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1 : " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1 : " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1 : " << bit8 << ", " << bit8.to_ulong() << endl;
	
	return 0;
}
