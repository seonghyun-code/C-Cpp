// this
#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis(MyClass *ptr) {
		cout << "���� �ּ� : " << ptr << endl;
	}

	void PrintThis2() { // this : �������� �ʴ� �Ű�����
		cout << "this �ּ� : " << this << endl;
	}

	/*
	�̷��ٰ� ���� ��
	void PrintThis2(this) {
		cout << "this �ּ� : " << this << endl;
	}
	*/

};

int main() {
	MyClass a, b;
	cout << "a�� �ּ�  : " << &a << endl; // 16�������� ����
	cout << "b�� �ּ�  : " << &b << endl;
	a.PrintThis(&a);
	b.PrintThis(&b);
	a.PrintThis2(); // this -> &a
	b.PrintThis2(); // this -> &b
	return 0;
}

// Ŭ���� ������ �Լ��� ��ü�� ���ԵǾ� �ִ°� �ƴ϶�, ���� ����Ǿ� ����.
//a[ printThis ], b[ printThis ] (x)
// a, b, printThis (o)
// ��� this��� �����͸� �Ű������� �������ν� ���� ����ϴ� printThis�� ��� ��ü �Ҽ����� �˾Ƴ� �� ����.