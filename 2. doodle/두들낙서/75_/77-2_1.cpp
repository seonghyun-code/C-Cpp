/* ���� ���ε� */

#include <iostream>

using namespace std;

class Base {
public:
	void Print() {
		cout << "From Base!!!" << endl;
	}
};

class Derived : public Base {
public:
	void Print() {
		cout << "From Derived!!!" << endl;
	}
};

/*
int a;
char* p;
p = &a; // Ÿ�� ����!
*/

Derived d;
Base* b = &d;

// �θ� Ŭ������ �����Ͱ� �ڽ� Ŭ������ ����ų �� ����!
// Base: ����, Derived: �Ѱ�
// ���� �����Ͱ� ������ �Ѱ��� ����Ű�� �� ���� x

int main() {
	Base* b = new Derived();
	// 1) Derived Ÿ���� ��ü�� �����Ҵ� �϶�.
	// 2) �� ��ü�� �ּҸ� b�� �����϶�.
	b->Print(); // (*b).Print();
	delete b;
	return 0;
}

/*
b : Base�� ����Ű�� ������
d : Derived ��ü
b -> d�ε� �̶� Print()�� �ϸ� �� ȣ���ұ�!?
"From Base!!!" ȣ���
*/