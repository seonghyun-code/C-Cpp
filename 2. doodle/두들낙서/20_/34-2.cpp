#include <stdio.h>
// prototype : 원형, 시제품 / 선언만 해주고 정의는 나중에!
/*
장점
1. 서로가 서로를 호출하는 경우
2. 순서에 신경 안 써도 ㅇㅋ
3. 어떤 함수를 사용하는지 바로 알 수 있음.
*/

// 제자리로 돌아오기
void drawSquare();
// 걷기
void walk(int);
// 돌기
void rotate(int);

int main() {
	drawSquare();
	return 0;
}

void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}
void rotate(int angle) {
	printf("%d도를 회전했습니다.\n", angle);
}