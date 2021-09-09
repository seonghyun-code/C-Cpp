#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

	Vector2 operator+(const Vector2 rhs) const;
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; // ���� * ���
	Vector2 operator/(const float rhs) const; // ���� / ���
	float operator*(const Vector2 rhs) const; // ���� ����

private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) { // const�� Ŭ���� ���� �޼ҵ忡�� ����ϴ� ��~ ���� �� ����.
	return Vector2(a * b.GetX(), a * b.GetY());
}
// ���� ���� : �ڱ� �ڽ�~�̶�� ������ x
// �Ű� ������ �� �� �ʿ�

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a * 1.6;
	Vector2 c2 = 1.6 * a; // Vector2 operator*(1.6, a) ��� ��� �޼ҵ� ������ ���۷����� .operator*�� ��� �Ұ���
	cout << "( " << a.GetX() << ", " << a.GetY() << " )" << endl;
	cout << "( " << b.GetX() << ", " << b.GetY() << " )" << endl;
	cout << "a * 1.6 = ( " << c1.GetX() << ", " << c1.GetY() << " )" << endl;
	cout << "1.6 * a = ( " << c2.GetX() << ", " << c2.GetY() << " )" << endl;
	return 0;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }


Vector2 Vector2::operator+(const Vector2 rhs) const {
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const {
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
	return x * rhs.x + y * rhs.y;
}

// ������ �����ε� ��û ����
// ����, �� ��ȯ, ...
// �̷� �� å�̳� ���ͳ� ����
