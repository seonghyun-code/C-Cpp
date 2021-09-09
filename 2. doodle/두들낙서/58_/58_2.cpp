// 정적 멤버 메소드

#include <iostream>

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0) {} // 검은색
	Color(float r, float g, float b) : r(r), g(g), b(b) {};

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	// 빨간 줄 : 어느 객체에 소속되어있는지 밝혀야 함 (ex. blue.MixColors(blue, purple);)
	/*Color MixColors(Color a, Color b) {
		return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	}*/

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	// 굳이 클래스 안에 넣어주는 이유 : 프라이빗 변수에 접근 가능해짐.
	// 중복되는 거는 또 컴파일러가 알아서 잘 구분 해준다. :)) (ex. b.b)

private:
	float r;
	float g;
	float b;
};

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = Color::MixColors(blue, red);
	// Color purple = blue.MixColors(blue, red); // 정적 메소드임에도 불구하고 어떤 객체에 포함된 것처럼 표현도 가능~ (굳이 쓰지 않기)
	cout << "r : " << purple.GetR() << " g : " << purple.GetG() << " b : " << purple.GetB() << endl;
	return 0;
}

// static : 전역함수가 클래스와 밀접한 관련이 있고, 프라이빗 멤버 메소드나 변수에 접근하고 싶을 때 정적 메소드로 사용하기
