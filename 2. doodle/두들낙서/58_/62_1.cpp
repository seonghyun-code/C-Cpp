// 연산자 오버로딩

#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

	Vector2 operator+(Vector2 rhs) { // operator+
		return Vector2(x + rhs.x, y + rhs.y);
	}
	// 결함1 : 선언, 정리가 분리 안 되어있음
	// 결함2 : 상수형 메소드로 선언
	// 결함3 : 상수형 매개변수로 선언

private:
	float x;
	float y;
};

Vector2 Sum(Vector2 a, Vector2 b) {
	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Sum(a, b);
	Vector2 c2 = a.operator+(b); // 메소드 형태로도 적을 수 있고
	Vector2 c3 = a + b; // a + b로도 쓸 수 있다.
	cout << "( " << a.GetX() << ", " << a.GetY() << " )" << endl;
	cout << "( " << b.GetX() << ", " << b.GetY() << " )" << endl;
	cout << "( " << c1.GetX() << ", " << c1.GetY() << " )" << endl;
	cout << "( " << c2.GetX() << ", " << c2.GetY() << " )" << endl;
	cout << "( " << c3.GetX() << ", " << c3.GetY() << " )" << endl;
	return 0;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }