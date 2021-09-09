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

// protected�� ��ӹ�����
// �θ� Ŭ���������� public�̾��� �����
// �ڽ� Ŭ�������� protected ����� �ٲ����
// ���� Derived�� ����ϴ� �ڽ� Ŭ���� DD�� ���Ӱ� ������ָ�
// DD�� bPublic�� bPrivate�� ���� ����~
class Derived : protected Base {
public:
	int dPublic;
	void Dfunc() {
		bPublic = 1;
		bProtected = 2;
		// bPrivate = 3;
		dPublic = 4; // ���ο����� ���� ����
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

	d.bPublic = 1; // �ܺο����� ���� �Ұ���
	// d.bProtected = 2;
	// d.bPrivate = 3;
	d.dPublic = 4;
	// d.dPrivate = 5;
	return 0;
}