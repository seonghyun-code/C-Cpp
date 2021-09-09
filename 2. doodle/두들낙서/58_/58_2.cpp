// ���� ��� �޼ҵ�

#include <iostream>

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0) {} // ������
	Color(float r, float g, float b) : r(r), g(g), b(b) {};

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	// ���� �� : ��� ��ü�� �ҼӵǾ��ִ��� ������ �� (ex. blue.MixColors(blue, purple);)
	/*Color MixColors(Color a, Color b) {
		return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	}*/

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	// ���� Ŭ���� �ȿ� �־��ִ� ���� : �����̺� ������ ���� ��������.
	// �ߺ��Ǵ� �Ŵ� �� �����Ϸ��� �˾Ƽ� �� ���� ���ش�. :)) (ex. b.b)

private:
	float r;
	float g;
	float b;
};

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = Color::MixColors(blue, red);
	// Color purple = blue.MixColors(blue, red); // ���� �޼ҵ��ӿ��� �ұ��ϰ� � ��ü�� ���Ե� ��ó�� ǥ���� ����~ (���� ���� �ʱ�)
	cout << "r : " << purple.GetR() << " g : " << purple.GetG() << " b : " << purple.GetB() << endl;
	return 0;
}

// static : �����Լ��� Ŭ������ ������ ������ �ְ�, �����̺� ��� �޼ҵ峪 ������ �����ϰ� ���� �� ���� �޼ҵ�� ����ϱ�
