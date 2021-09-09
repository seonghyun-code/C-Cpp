#include <stdio.h>
// 이렇게 하게 되면은 walk -> rotate -> drawSquare 순으로 선언해야함.
// 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}
// 돌기
void rotate(int angle) {
	printf("%d도를 회전했습니다.\n", angle);
}

// 제자리로 돌아오기
void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}

int main() {
	drawSquare();
	return 0;
}