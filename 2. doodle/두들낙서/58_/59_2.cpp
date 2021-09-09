// ���� ��� ���� : Ŭ���� ��ü�� ���ԵǴ� ���� (��ü�� x) ... Ŭ������ �� �ϳ��� ����

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
	// ���� ��� �������� �� �ȿ��� �ʱ�ȭ �ȿ��� �Ұ���.
	// ��ü ������ ������ 1�� �Ǵ� �� ���� �� �Ǵϱ�. (������ �ȿ��� �ʱ갪�� �ִ� �Ͱ� ���ұ� ����)

	static int idCounter; // ���� ��� ���� ����

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1; // Ŭ���� �ۿ��� �ʱ�ȭ�������. (�Լ� ���ǿ� ������ ���� ����� ��ó��)

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
���� ���� ���� : Ŀ�ٶ� ���α׷��̾��ٸ� idCounter�� ��û ������ ��. ��_��
�׷��� ���� ������ �������������� ���������� ��. 
ex. �÷�idcounter, ����idcounter, ... (������ ���� ���� ������ �����)
�׷��� Ŭ������ ���� �ִ� ������ �ִ��� Ŭ���� �ȿ� �ִ� �� ����.
*/