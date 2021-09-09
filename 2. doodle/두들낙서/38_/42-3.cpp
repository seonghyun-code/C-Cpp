#include <stdio.h>

struct Point {
	int x, y;
	void moveRight() {
		x++;
	}
	void moveLeft() { x--; }
	void moveUp() { y++; }
	void moveDown() { y--; }
};

int main() {
	Point p = { 2, 5 };
	p.moveDown(); // (2, 4)
	p.moveRight(); // (3, 4)
	printf("(%d, %d)", p.x, p.y);
	return 0;
}