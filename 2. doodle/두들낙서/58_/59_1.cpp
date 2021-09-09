// 정적 멤버 변수 : 클래스 자체에 포함되는 변수 (객체에 x) ... 클래스에 단 하나만 존재

#include <iostream>

using namespace std;

int idCounter = 1;

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) {} // id = idCounter 후에 idCounter++
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {};

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; };

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

private:
	float r;
	float g;
	float b;

	int id;
};

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = Color::MixColors(blue, red);
	cout << "r : " << purple.GetR() << " g : " << purple.GetG() << " b : " << purple.GetB() << endl;
	cout << "red.GetId() = " << red.GetId() << endl; // 2
	cout << "blue.GetId() = " << blue.GetId() << endl; // 1
	cout << "purple.GetId() = " << purple.GetId() << endl; // 3
	return 0;
}