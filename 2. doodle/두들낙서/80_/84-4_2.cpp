#include <iostream>

using namespace std;

class Base { // ���� Ŭ����
public:
	virtual void f() {}
	int x;
};

class Derived : public Base {
public:
	void f() {}
	int y;
};

int main() {
	cout << sizeof(Base) << endl;    // 4 + 4 = 8
	cout << sizeof(Derived) << endl; // 8 + 4 = 12
	return 0;
}

// 4byte�� ������? : �� class�鿡 ���� ������ �������.
//    Base [������][x] = 8byte
// Derived [������][x][y] = 12byte
// �����͵��� �� ����ų��?
// Base -> [*], Dervied -> [@]��� �ϸ�

/*
Base* b = new Derived;�� ��
b�� Base�� ����Ű�� �������̱� ������ [������][x]������ ����ų �� ����. ... 10�� �׸�
�׷��� b �ȿ� �����͸� Ȯ���غ��� [@]�� ����Ű�� ����.
�̰� ���� a�� �갡 Derived���� �ϰ� �Ǻ� ... (RTTI�� ����)
*/

// ���
// dynamic_cast�� ���ַ��� Base Ŭ������ �ϳ� �̻��� �����Լ��� ���� ���� Ŭ�������� ��.
// ���� Ŭ������ RTTI�� �����ϱ� ����!