#include <iostream>

using namespace std;

class A { // �߻� Ŭ����
public:
	virtual void f() = NULL // f() = 0�̶�� ���൵ ����
};

class B : public A {
public:
	void f() { // ���Ǹ� ����������Ƿ� B�� ȣ���� �� �־��� ��^_^
		cout << "B::f()" << endl;
	}
};

int main() {
	// A* a = new A; // ���� �����Լ��� �ٲ�鼭 ���� �Ұ�������.
	A* a = new B; // ��� �޾ƿͼ� �������̵��� ����!
	a->f();
	delete a;
	return 0;
}

// A�� �� �ϳ��� ���� �����Լ��� �����ϰ� �ִٸ� ��ü ���� �Ұ�
// �̷� �� �߻� Ŭ������� �θ�!
// ��ü�����δ� �ǹ̰� X