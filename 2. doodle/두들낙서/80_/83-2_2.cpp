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
	int* a = new int(5);
	Base* b = new Drv1;
	Drv1* d1 = static_cast<Drv1*>(a); // a�� Drv1�� ����Ű�� �����ͷ� ��ȯ�ϰڴ�.
	Drv1* d1 = static_cast<Drv1*>(b); // ���� �� �������������� �ٿ�ĳ�����̱���~�� �ƴ� ��.
	d1->f();
	delete b;
	delete d1;
	delete a;
	return 0;
}