#include <stdio.h>
/*
1. 정수 하나를 매개변수로 받아서
짝수이면 0, 홀수이면 1을 반환하는 함수 작성
*/

// 꺙
/*int parity(int n) {
	if (n % 2 == 0) {
		return 0;
	}
	return 1;
}*/

// 정답
int parity(int n) {
	return (n % 2 + 2) % 2;
}

int main() {
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
	return 0;
}