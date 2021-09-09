#include <iostream>

using namespace std;

class Base {
public:
	int a = 1;
};

class Drv1 : public Base {
public:
	void f() {
		cout << "Drv1::f()" << endl;
		cout << b << endl;
	}

	float b = 3.14;
};

int main() {
	int* a = new int(5);
	Base* b = new Drv1;
	Drv1* d1 = static_cast<Drv1*>(a); // a를 Drv1를 가리키는 포인터로 변환하겠다.
	Drv1* d1 = static_cast<Drv1*>(b); // 빨간 줄 없음ㅎㅎㅎㅎㅎ 다운캐스팅이구나~를 아는 것.
	d1->f();
	delete b;
	delete d1;
	delete a;
	return 0;
}