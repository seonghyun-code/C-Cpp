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

// protected로 상속받으면
// 부모 클래스에서는 public이었던 멤버를
// 자식 클래스에서 protected 멤버로 바꿔버림
// 만약 Derived를 상속하는 자식 클래스 DD를 새롭게 만들어주면
// DD는 bPublic과 bPrivate에 접근 가능~
class Derived : protected Base {
public:
	int dPublic;
	void Dfunc() {
		bPublic = 1;
		bProtected = 2;
		// bPrivate = 3;
		dPublic = 4; // 내부에서는 접근 가능
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

	d.bPublic = 1; // 외부에서는 접근 불가능
	// d.bProtected = 2;
	// d.bPrivate = 3;
	d.dPublic = 4;
	// d.dPrivate = 5;
	return 0;
}