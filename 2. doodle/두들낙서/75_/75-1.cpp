// ��ü ���� ���α׷��� ����! ... ��� ������ ���� �߿�
/*
��� �޼ҵ� : ��, ��� ���� : ��
�θ� Ŭ���� [��, ��, ��, ��, ... ]
�ڽ� Ŭ���� [�θ��� ��� ��, ��, ��, �� �̿� ���� + �ڱ� �ڽŸ��� ��� ��, �� �̿� ����]

�θ� Ŭ������ �ڽ� Ŭ������ ���Ѵ�? (X)
�ڽ� Ŭ������ �θ� Ŭ������ ���ϴ� �� �´� ��!!

���� & �Ѱ�
���� : 1. ���, 2. Y����ü
�Ѱ� : 1. ���, 2. Y����ü, 3. ����, 4. ��ȥ

���ڰ� �Ѱ��� ���Եǳ���? ���� �Ѱ��� ���ڿ� ���ԵǴ� ��.
*/
#include <iostream>

using namespace std;

class Base { // �θ� Ŭ������ c������ base��� �θ�
public:
	void bFunc() {
		cout << "Hello!" << endl;
	}
	int bNum;
};

class Derived : public Base { // �ڽ� Ŭ������ �Ļ� Ŭ����
public:
	void dFunc() {
		cout << "Hello?" << endl;
	}
	int dNum;
};

int main() {
	Base b;
	Derived d;
	b.bFunc();
	b.bNum = 1;

	d.bFunc();
	d.bNum = 2;
	d.dFunc();
	d.dNum = 1;
	// b.dFunc(); // �Ұ���!
	return 0;
}