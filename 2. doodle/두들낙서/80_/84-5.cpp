#include <iostream>
#include <math.h>

using namespace std;

class Shape { // ���� ����
public:
	// ���� ���� �Լ�
	virtual double GetArea() const = 0; // ������ ���� ��ȯ
	virtual void Resize(double k) = 0;  // ���� ũ�� ��ȯ
};

class Circle : public Shape {
public:
	Circle(double r) : r(r) {}
	double GetArea() const { // ���� ���� �Լ� �������̵�
		return r * r * 3.14;
	}
	void Resize(double k) { // ���� ���� �Լ� �������̵�
		r *= k;
	}
private:
	double r;
};

class Rectangle : public Shape {
public:
	Rectangle(double a, double b) : a(a), b(b){}
	double GetArea() const { // ���� ���� �Լ� �������̵�
		return a * b;
	}
	void Resize(double k) { // ���� ���� �Լ� �������̵�
		a *= k;
		b *= k;
	}
	double GetDiag() const {
		return sqrt(a * a + b * b); // �밢���� ���� ... sqrt : ��Ʈ
	}
private:
	double a, b;
};

int main() {
	Shape* shapes[] = { new Circle(1), new Rectangle(1, 2) }; // 82-2_2���� �迭 ������ ����
	// shapes : [C ��ü�� ����Ű�� ������][R ��ü�� ����Ű�� ������]
	// shapes�� ���� Ŭ�����̹Ƿ� R�� C�� 0��° ĭ���� RTTI�� �����ϰ� ���ִ� �����Ͱ� ����.

	// ������ ����
	// ���簢���� ���, �밢�� ���� �Բ� ���
	for (int i = 0; i < 2; i++) {
		cout << "������ ���� : " << shapes[i]->GetArea() << endl;
		// ������ �迭�̹Ƿ� shapes[i] ��ü�� ������~

		Rectangle* r = dynamic_cast<Rectangle* > (shapes[i]);
		// dynamic_cast : ��ü�� � Ÿ������ �˾Ƴ��� ���� 0��° �����͸� ���󰡺��� �˾Ƴ�.
		// ����ȯ�� �������� ��(Rectangle�� ��) r�� �ּҰ� ����
		// �����ϸ� r�� null�� return

		if (r != NULL) {
			cout << "�밢���� ���� : " << r->GetDiag() << endl;
			// shapes[i]�� ���� GetDiag�� ���� ����
		}

	}

	for (int i = 0; i < 2; i++) {
		delete shapes[i]; // �迭 ��ü�� ���� �Ҵ� x, �� ĭ�鸸 �����Ҵ�� ��ü!
	}
	return 0;
}