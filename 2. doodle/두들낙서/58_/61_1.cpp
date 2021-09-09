// 벡터 : 그래픽, 게임, ...

// 멤버 메소드 선언, 정의 분리하는 이유
// ex. b 내에서 c를 호출하고, c 내에서 b를 호출할 때
// => 선언 먼저 하고 나중에 가서 정의를 시키는 방식~~~ :))

#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

private:
	float x;
	float y;

};

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	// Vector2 c = a + b; // 불가능. 사람 눈에만 벡터지 클래스 더하기 클래스를 하고 있는 것
	cout << "( " << a.GetX() << ", " << a.GetY() << " )" << endl;
	cout << "( " << b.GetX() << ", " << b.GetY() << " )" << endl;
	return 0;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y): x(x), y(y){}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }