// �������̵��� ���� ���ε�

/* �������̵� */
// overwrite : ����� (��� �򰥸��� �� ��!!!!!!)
// override : �켱�ϴ� (�θ� Ŭ������ ������ �̸��� ����� ���� �� �ڽ� Ŭ������ ����� �켱�Ѵ�.)
// overload :         (�̸��� ���� �������� �Լ��� ������ �� ����)


#include <iostream>

using namespace std;

class Base {
public:
	int a = 10; // ������ ���� �ٷ� �ʱ�ȭ~ ��~
};

class Derived : public Base {
public:
	int a = 20;
};

int main() {
	Base b;
	Derived d;
	cout << b.a << endl; // 10
	cout << d.a << endl; // 20
	cout << d.Base::a << endl; // 10
	cout << d.Derived::a << endl; // 20
	return 0;
}

/*
Base [a] => Derived [a, Base���� ��� �޾� �� a]
�̷� ��쿡 d.a��� �ϸ� ������ a
Base�� a�� �����ϰ� �ʹٸ�~~ ������ָ� ��.
��, �ڽ��� ���� ����� �켱�Ѵ�!
*/