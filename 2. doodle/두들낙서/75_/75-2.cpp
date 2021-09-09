// 접근 제어 지시자
// public    : 외부 접근 허용, 자식 클래스 접근 허용
// private   : 외부 접근 불가, 자식 클래스 접근 불가->상속 받아도 사용x
// protected : 외부 접근 불가, 자식 클래스 접근 허용

#include <iostream>

using namespace std;

class Base {
public:
	int bPublic;

protected:
	int bProtected;

private:
	int bPrivate;
};

class Derived : public Base {
public:
	int dPublic;
	void Dfunc() {
		bPublic = 1;
		bProtected = 2;
		// bPrivate = 3; // 접근 불가능~
		dPublic = 4;
		dPrivate = 5;
	}

private:
	int dPrivate;
};

int main() {
	Base b;
	Derived d;

	b.bPublic = 1;
	// b.bProtected = 2;
	// b.bPrivate = 3;

	d.bPublic = 1;
	// d.bProtected = 2;
	// d.bPrivate = 3;
	d.dPublic = 4;
	// d.dPrivate = 5;
	return 0;
}