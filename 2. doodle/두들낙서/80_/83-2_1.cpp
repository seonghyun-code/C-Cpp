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
	Drv1* d1 = (Drv1*)a; // �̷��� �ص� ������ ��.. ������� ��.
	// => ��������� ���� �ʹ� �� �Ǵ��� �˻����ָ� ���ڴ�. => static_cast
	d1->f();
	delete d1;
	delete a;
	return 0;
}