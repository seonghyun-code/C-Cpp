#include <stdio.h>

struct Point {
	int x, y;
}; // �޸𸮿��� �ƹ� ��ȭ�� x

int main() {
	Point p; // 4byte ���� �� �� ������ ����!
	//   p.x p.y
	// p [ ] [ ]
	printf("%d\n", sizeof(p)); // 4 * 2 = 8
	p.x = 3;
	p.y = 4;
	printf("(%d, %d)\n", p.x, p.y);
	return 0;
}