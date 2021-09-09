#include <iostream>

using namespace std;

class Base { // ���� Ŭ���� : �����Լ��� �ϳ��� �ִ� Ŭ����
public:
	virtual void f() {} // �����Լ�
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
	b->f(); // �����Ϸ��� �� �κ��� ��ġ x
	// ��� ��Ÿ�ӿ��� b�� drv�� ����Ű�� ������ �¸� �����ϰ�, �ƴϸ� base�� �� ����
	delete d;
	delete b;
	return 0;
}