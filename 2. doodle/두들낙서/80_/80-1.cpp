#include <iostream>

using namespace std;

class A {
public:
	virtual void f(){ // ���� �Լ�(������ ����x)������ �Ϻ��� ������ X
		cout << "A::f()" << endl;
	} 
};

class B : public A {
public:
	void f(){
		cout << "B::f()" << endl;
	}
};

int main() {
	A* a = new A;
	a->f(); // �Ϻ��ߴٸ� A::f()�� ��µ��� �ʾƾ� �߱�.
	delete a;
	return 0;
}