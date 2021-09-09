#include <iostream>

using namespace std;

class Base { // 다형 클래스 : 가상함수가 하나라도 있는 클래스
public:
	virtual void f() {} // 가상함수
	int x;
};

class Derived : public Base {
public:
	void f() {}
	int y;
};

int main() {
	Base* b = new Derived;
	Derived* d = static_cast<Derived*>(b);
	b->f(); // 컴파일러는 이 부분을 터치 x
	// 대신 런타임에서 b가 drv를 가리키고 있으면 걔를 실행하고, 아니면 base의 것 실행
	delete d;
	delete b;
	return 0;
}