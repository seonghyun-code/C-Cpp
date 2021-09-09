#include <iostream>

using namespace std;

class Base {
public:
	void f() {}
	int x;
};

class Derived : public Base {
public:
	void f() {} // 오버라이딩
	int y;
};

int main() {
	Base* b = new Derived;
	Derived* d = static_cast<Derived*>(b);
	b->f(); // Base의 f()가 호출됨 ... 가상함수가 아니라 정적바인딩이 발생하기 떄문
	delete d;
	delete b;
	return 0;
}