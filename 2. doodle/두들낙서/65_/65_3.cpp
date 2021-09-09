/* 객체 동적 할당 */

#include <iostream>

using namespace std;

class Vector2 {
public:
	// 생성자
	Vector2() : x(0), y(0) {
		cout << this << " : Vector2()" << endl; // this : 주소값
	}
	Vector2(const float x, const float y) : x(x), y(y) {
		cout << this << " : Vector2(const float x, const float y)" << endl;
	}

	// 소멸자
	~Vector2() {
		cout << this << " : ~Vector2()" << endl;
	}
	
	float GetX() const { return x; }
	float GetY() const { return y; }

private:
	float x;
	float y;
};


int main() {
	// 정적 할당
	Vector2 s1 = Vector2(); // Vector2 s1;
	Vector2 s2 = Vector2(3, 2); // Vector2 s2(3, 2);

	// 동적 할당
	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(3, 2);

	cout << "( " << d1->GetX() << ", " << d1->GetY() << " )" << endl;// (*d1).GetX()
	cout << "( " << d2->GetX() << ", " << d2->GetY() << " )" << endl;
	
	delete d1;
	delete d2;
	// d1 -> d2 -> s2-> s1 순서로 메모리 해제

	return 0;
}