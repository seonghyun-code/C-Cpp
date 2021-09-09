#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

	static Vector2 Sum(Vector2 a, Vector2 b) {
		return Vector2(a.x + b.x, a.y + b.y);
	}

private:
	float x;
	float y;

};

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c = Vector2::Sum(a, b);
	cout << "( " << a.GetX() << ", " << a.GetY() << " )" << endl;
	cout << "( " << b.GetX() << ", " << b.GetY() << " )" << endl;
	cout << "( " << c.GetX() << ", " << c.GetY() << " )" << endl;
	return 0;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }