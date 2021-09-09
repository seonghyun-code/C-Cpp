// �ٿ�ĳ���� : �θ�Ŭ�������� �ڽ�Ŭ������ ����ȯ
// 1. static_cast
// 2. dynamic_cast

// �̹� �ð� : static_cast
// ���� : �����Ͻð��� �Ϸ� (double -> int / int -> double)

#include <iostream>

using namespace std;

class Base {
public: 
	int a = 1;
};

class Drv1 : public Base {
public:
	void f() {
		cout << "Drv1::f()" << endl;
		cout << b << endl;
	}

	float b = 3.14;
};

int main() {
	Base* b = new Drv1; // �θ�Ŭ������ �ڽ�Ŭ���� ��ü�� ����Ŵ
	// b->a; // b�� Drv1�� ����Ű���� base Ŭ���� ����鿡�Ը� ���� ����! Drv1 ����鿡�Դ� ���� �Ұ�

	/* �ַ�� */
 	// Drv1* d1 = b; // c++������ �ٸ� Ÿ���� �����͵鳢���� ���� ���� �Ұ� ... ���� �ݴ�δ� ��ĳ���ÿ� ���� ����
	Drv1* d1 = (Drv1*)b; // ����� ����ȯ ... b�� Drv1�� ����Ű�� �����ͷ� ���ڴ�.
	d1->f();
	delete d1;
	delete b;
	return 0;
}