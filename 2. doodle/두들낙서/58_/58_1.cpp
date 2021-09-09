// static : 정적 <-> dynamic : 동적
// 클래스 멤버 : 정적 또는 동적
// 정적 : 붕어빵틀에 해당되는 멤버들 ... 클래스 하나당 한 개
// 동적 : 붕어빵마다 다른 멤버들 ... 객체에 포함

#include <iostream>

using namespace std;

// 색상을 저장 (RGB) ... float RGB(0~1)
class Color {
public:
	Color() : r(0), g(0), b(0){} // 검은색
	Color(float r, float g, float b) : r(r), g(g), b(b) {};

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
private:
	float r;
	float g;
	float b;
};

Color MixColors(Color a, Color b) {
	return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
}

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = MixColors(blue, red);
	cout << "r : " << purple.GetR() << " g : " << purple.GetG() << " b : " << purple.GetB() << endl;
	return 0;
}