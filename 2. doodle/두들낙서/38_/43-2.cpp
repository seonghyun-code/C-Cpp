#include <stdio.h>
/*
2. ��ĭ�� ��� �� �ڵ��?
*/
struct Point { int x, y; };

void pSwap(Point* p) {
	// x�� y ��ǥ�� ��ȯ
	int tmp = p->x;
	p->x = p->y;
	p->y = tmp;
}

int main() {
	Point pos = { 3, 4 };
	pSwap(&pos);
	printf("(%d, %d)", pos.x, pos.y);
	return 0;
}