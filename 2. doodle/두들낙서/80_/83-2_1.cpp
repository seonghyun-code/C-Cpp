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
	Drv1* d1 = (Drv1*)a; // 이렇게 해도 문제가 없.. 막아줘야 함.
	// => 상식적으로 말이 너무 안 되는지 검사해주면 좋겠다. => static_cast
	d1->f();
	delete d1;
	delete a;
	return 0;
}