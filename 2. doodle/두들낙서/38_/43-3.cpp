#include <stdio.h>
/*
3. 2번 문제에서 pSwap을 Point 구조체에 집어넣어보세요! (c++만 해당하는 문제)
*/
struct Point {
	int x, y;
	void pSwap() {
		// x와 y 좌표를 교환
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