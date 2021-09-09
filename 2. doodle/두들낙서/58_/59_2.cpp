// 정적 멤버 변수 : 클래스 자체에 포함되는 변수 (객체에 x) ... 클래스에 단 하나만 존재

#include <iostream>

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) {}
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {};

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; };

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	// static int idCounter = 1;
	// 정적 멤버 변수들은 이 안에서 초기화 안에서 불가능.
	// 객체 생성할 때마다 1이 되는 게 말이 안 되니까. (생성자 안에서 초깃값을 주는 것과 같았기 때문)

	static int idCounter; // 정적 멤버 변수 선언

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; // 클래스 밖에서 초기화해줘야함. (함수 정의와 선언을 따로 해줬던 것처럼)

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

/*
정적 변수 장점 : 커다란 프로그램이었다면 idCounter가 엄청 많았을 것. ㅠ_ㅠ
그런데 전역 변수로 선언해줬으면은 난잡해졌을 것. 
ex. 컬러idcounter, 셰잎idcounter, ... (실제로 전역 변수 선언은 지양됨)
그래서 클래스와 관련 있는 변수는 최대한 클래스 안에 넣는 게 좋음.
*/