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
	Vector2 operator*(const float rhs) const; // 벡터 * 상수
	Vector2 operator/(const float rhs) const; // 벡터 / 상수
	float operator*(const Vector2 rhs) const; // 벡터 내적

private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) { // const는 클래스 내부 메소드에서 사용하는 것~ 붙일 수 없음.
	return Vector2(a * b.GetX(), a * b.GetY());
}
// 전역 변수 : 자기 자신~이라는 개념이 x
// 매개 변수가 두 개 필요

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a * 1.6;
	Vector2 c2 = 1.6 * a; // Vector2 operator*(1.6, a) 대신 얘는 메소드 형태의 오퍼레이터 .operator*는 사용 불가능
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

// 연산자 오버로딩 엄청 많음
// 대입, 형 변환, ...
// 이런 건 책이나 인터넷 보기
