#include <iostream>

using namespace std;

class Base {
public:
	int a = 10; // ������ ���� �ٷ� �ʱ�ȭ~ ��~
	void Print() {
		cout << "From Base!!!" << endl;
	}
};

class Derived : public Base {
public:
	int a = 20;
	void Print() {
		cout << "From Derived!!!" << endl;
	}
};

int main() {
	Base b;
	Derived d;
	d.Print(); // ���� ��� �켱
	d.Base::Print(); // Base��� ���
	d.Derived::Print(); // Derived��� ���
	return 0;
}