// 다운캐스팅 : 부모클래스에서 자식클래스로 형변환
// 1. static_cast
// 2. dynamic_cast

// 이번 시간 : static_cast
// 정적 : 컴파일시간에 완료 (double -> int / int -> double)

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
	Base* b = new Drv1; // 부모클래스가 자식클래스 객체를 가리킴
	// b->a; // b는 Drv1를 가리키지만 base 클래스 멤버들에게만 접근 가능! Drv1 멤버들에게는 접근 불가

	/* 솔루션 */
 	// Drv1* d1 = b; // c++에서는 다른 타입의 포인터들끼리는 대입 연산 불가 ... 물론 반대로는 업캐스팅에 의해 가능
	Drv1* d1 = (Drv1*)b; // 명시적 형변환 ... b를 Drv1을 가리키는 포인터로 보겠다.
	d1->f();
	delete d1;
	delete b;
	return 0;
}