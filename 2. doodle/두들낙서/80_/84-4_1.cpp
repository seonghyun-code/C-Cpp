#include <iostream>

using namespace std;

class Base {
public:
	void f() {}
	int x;
};

class Derived : public Base {
public:
	void f() {}
	int y;
};

int main() {
	cout << sizeof(Base) << endl;    // x : 4byte
	cout << sizeof(Derived) << endl; // x, y : 8byte
	return 0;
}