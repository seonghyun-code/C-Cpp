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

class Drv2 : public Base {
public:
	void f() {
		cout << "Drv2::f()" << endl;
		cout << c << endl;
	}

	int c = 3;
};

int main() {
	Base* b = new Drv1; // ���� �갡 Drv1�� ����Ű�� �־��ٸ�?
	Drv2* d2 = static_cast<Drv2*>(b);
	// �����Ϸ��� b�� ������ ����Ű�� �ִ� ��ü�� �Ű� �� ��.
	// �׷��� �ٿ�ĳ������ ��Ű�µ� ���� x
	d2->f(); // �̻��� ���ڰ� ��.
	delete d2;
	delete b;
	return 0;
}

/*
b�� Base�� ����Ű�� ������
b[100]  -> Drv1
d2[100] -> Drv1 ... Drv1�ε� Drv2�� ���� ��

Drv1 : �� ĭ�� 4byte
[a = 1][b = 3.14]

d2->f()�� ȣ���ϸ�?
��� f() method�� ��ü �ȿ� ���ԵǾ� ���� �ʰ�, �ٸ� ���� ����.
��� � ��ü�� f()�� ȣ���ؾ� �ǳİ� this�� �Ѿ�� ��.
�׷��� f�� �ٽ� ����
void f(this) {
		cout << "Drv2::f()" << endl;
		cout << this->c << endl;
	}

���� d2�� ���������� Drv2 ��ü�� �����״ٸ�
[a = 1][c = 3] // 3�� ����� ��µ� ��.

�׷��� drv1�� ����Ű�� �����Ƿ�
drv1�� drv2 ��ü�ΰ�����~��� ����
���� ������ c�� �ι�° ĭ�� ���� �Ŵϱ� �ι��� ĭ�� ���캼 ��.
�׸��� b�� ��ǻ�Ϳ� 2������ 32bit ����...^^
�׷��� float�� int���·� ����� ��.
3.14�� 32��Ʈ�� 01... ��� ����Ǿ� �����ٵ� �긦 int�� �ؼ��ؼ� �Ф�...
�׷��� ������ ���� �ƴԤ�_��
*/

// �ذ� => 84^_^