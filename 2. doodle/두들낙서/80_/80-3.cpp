#include <iostream>

using namespace std;

const double PI = 3.141592653589793;

class Shape { // 추상 클래스 ... Shape 객체 생성 불가
public:
	virtual double GetArea() = 0; // 순수 가상 함수 ... Shape의 GetArea 호출 ㄴㄴ 대신 관리는 편하게~

	virtual void Resize(double f) = 0; // 순수 가상 함수
};

class Circle : public Shape {
public:
	Circle(double r) : r(r) {}
	
	double GetArea() {
		return PI * r * r;
	}

	void Resize(double f) {
		r *= f;
	}

private:
	double r;
};

class Rectangle : public Shape {
public:
	Rectangle(double a, double b) : a(a), b(b) {}

	double GetArea() {
		return a * b;
	}

	void Resize(double f) {
		a *= f;
		b *= f;
	}

private:
	double a, b;
};

int main() {
	Shape* shapes[] = {
		new Circle(10),
		new Rectangle(20, 30)
	};

	for (Shape* s : shapes) {
		s->Resize(2);
	}
	for (Shape* s : shapes) {
		cout << s->GetArea() << endl;
	}

	for (Shape* s : shapes) {
		delete s;
	}
	return 0;
}