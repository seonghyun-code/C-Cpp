#include <stdio.h>
/*
3. 2�� �������� pSwap�� Point ����ü�� ����־����! (c++�� �ش��ϴ� ����)
*/
struct Point {
	int x, y;
	void pSwap() {
		// x�� y ��ǥ�� ��ȯ
		int tmp = x;
		x = y;
		y = tmp;
	}
};

int main() {
	Point pos = { 3, 4 };
	pos.pSwap();
	printf("(%d, %d)", pos.x, pos.y);
	return 0;
}