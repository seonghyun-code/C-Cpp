// ���� ���� ������
// public    : �ܺ� ���� ���, �ڽ� Ŭ���� ���� ���
// private   : �ܺ� ���� �Ұ�, �ڽ� Ŭ���� ���� �Ұ�->��� �޾Ƶ� ���x
// protected : �ܺ� ���� �Ұ�, �ڽ� Ŭ���� ���� ���

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
		// bPrivate = 3; // ���� �Ұ���~
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