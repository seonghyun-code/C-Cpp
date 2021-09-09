#include <iostream>
#include <math.h>

using namespace std;

class Shape { // 도형 저장
public:
	// 순수 가상 함수
	virtual double GetArea() const = 0; // 도형의 넓이 반환
	virtual void Resize(double k) = 0;  // 도형 크기 변환
};

class Circle : public Shape {
public:
	Circle(double r) : r(r) {}
	double GetArea() const { // 순수 가상 함수 오버라이딩
		return r * r * 3.14;
	}
	void Resize(double k) { // 순수 가상 함수 오버라이딩
		r *= k;
	}
private:
	double r;
};

class Rectangle : public Shape {
public:
	Rectangle(double a, double b) : a(a), b(b){}
	double GetArea() const { // 순수 가상 함수 오버라이딩
		return a * b;
	}
	void Resize(double k) { // 순수 가상 함수 오버라이딩
		a *= k;
		b *= k;
	}
	double GetDiag() const {
		return sqrt(a * a + b * b); // 대각선의 길이 ... sqrt : 루트
	}
private:
	double a, b;
};

int main() {
	Shape* shapes[] = { new Circle(1), new Rectangle(1, 2) }; // 82-2_2와의 배열 차이점 유의
	// shapes : [C 객체를 가리키는 포인터][R 객체를 가리키는 포인터]
	// shapes는 다형 클래스이므로 R과 C의 0번째 칸에는 RTTI를 가능하게 해주는 포인터가 있음.

	// 도형의 넓이
	// 직사각형일 경우, 대각선 길이 함꼐 출력
	for (int i = 0; i < 2; i++) {
		cout << "도형의 넓이 : " << shapes[i]->GetArea() << endl;
		// 포인터 배열이므로 shapes[i] 자체가 포인터~

		Rectangle* r = dynamic_cast<Rectangle* > (shapes[i]);
		// dynamic_cast : 객체가 어떤 타입인지 알아내기 위해 0번째 포인터를 따라가보고 알아냄.
		// 형변환에 성공했을 때(Rectangle일 때) r로 주소값 전달
		// 실패하면 r에 null을 return

		if (r != NULL) {
			cout << "대각선의 길이 : " << r->GetDiag() << endl;
			// shapes[i]를 쓰면 GetDiag에 접근 못함
		}

	}

	for (int i = 0; i < 2; i++) {
		delete shapes[i]; // 배열 자체는 동적 할당 x, 각 칸들만 동적할당된 객체!
	}
	return 0;
}