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

class Derived2 : public Base {

};

Derived d;
Base* b = &d;

int main() {
	Base* b = b = new Derived();
	b->Print(); // b? d? ... �ڵ����� �������ε� : Base
	delete b;

	b = new Derived2();
	b->Print(); // b? ??? ����~~ ... �ڵ����� �������ε� : Base
	delete b;
	return 0;
}


/*
�̷������� �ϸ� �򰥸��ϱ�
b->Print()��� �ϸ��� �׳� Base�� Print()�� ȣ������!
*/

/*
���ε� : ��ȣ�� �����͵�... ��� Ÿ���� ����ų�� �����ϴ� ��
�������ε� : b��� �ϸ��� �׳� Base�� ����Ű�� �ɷ�! (�θ� Ŭ������ ����Ű����)
�������ε� : b���� ��Ȳ�� ���� Derived�� �� ����, Derived2�� �� ����
c++ : �ƹ� ���� ���� ������ ���� ���ε�
*/

/*
[���]
1) �θ� ����Ű�� �����ʹ� �ڽ��� ����ų ���� �ִ�.
2) b->Print(); �̷������� �Ǿ����� ��
b�� ���� ����Ű�� �ִ� ��ü�� �θ����� �ڽ����� �����Ϸ��� �Ǻ��ϱ� ��ƴ�.
3) ����, c++������ �ƹ� �� ������ �������̵� �߻�(�θ� Ŭ������ ����Ű����)

*/