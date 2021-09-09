#include <iostream>

using namespace std;

class Base {
public:
	virtual void f() {}
	int x = 10;
};

class Derived : public Base {
public:
	void f() {}
	int y = 20;
};

int main() {
	cout << sizeof(Base) << endl; // 8
	cout << sizeof(Derived) << endl; // 12

	int(*a) = (int*)new Base;
	cout << a[0] << " " << a[1] << endl; // 6855476 10

	int(*b) = (int*)new Derived;
	cout << b[0] << " " << b[1] << " " << b[2] << endl; // 6855488 10 20

	int(*c) = (int*)new Derived;
	cout << c[0] << " " << c[1] << " " << c[2] << endl; // 6855488 10 20

	delete a;
	delete b;
	delete c;
	return 0;
}