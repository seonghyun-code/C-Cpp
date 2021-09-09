#include <iostream>

using namespace std;

class Base {
public:
	void f() {}
	int x;
};

class Derived : public Base {
public:
	void f() {} // �������̵�
	int y;
};

int main() {
	Base* b = new Derived;
	Derived* d = static_cast<Derived*>(b);
	b->f(); // Base�� f()�� ȣ��� ... �����Լ��� �ƴ϶� �������ε��� �߻��ϱ� ����
	delete d;
	delete b;
	return 0;
}