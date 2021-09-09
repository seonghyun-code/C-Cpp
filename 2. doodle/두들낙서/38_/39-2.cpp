#include <stdio.h>

struct Point {
	int x, y;
}; // 메모리에서 아무 변화도 x

int main() {
	Point p; // 4byte 공간 두 개 나란히 생김!
	//   p.x p.y
	// p [ ] [ ]
	printf("%d\n", sizeof(p)); // 4 * 2 = 8
	p.x = 3;
	p.y = 4;
	printf("(%d, %d)\n", p.x, p.y);
	return 0;
}