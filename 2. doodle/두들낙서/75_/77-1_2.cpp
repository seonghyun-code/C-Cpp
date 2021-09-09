#include <iostream>

using namespace std;

class Base {
public:
	int a = 10; // 생성자 없이 바로 초기화~ 예~
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
	d.Print(); // 고유 멤버 우선
	d.Base::Print(); // Base라고 명시
	d.Derived::Print(); // Derived라고 명시
	return 0;
}