#include <stdio.h>
// 재귀 함수 : 자기 자신이 안에
// 학교(배울 학, 학(배울 학)교(학교(배울 학 학교 교) 교) 교)
// recursion
void rec(int n) {
	printf("%d\n", n);
	rec(n + 1);
}

void rec2(int n) {
	if (n > 5) {
		printf("종료 : %d ", n);
		return;
	}
	printf("%d\n", n);
	rec2(n + 1);
	printf("-> %d ", n);
}
// 실행 순서 : 1 -> 2 -> 3 -> 4 -> 5 -> 6
// 종료 순서 : 6 -> 5 -> 4 -> 3 -> 2 -> 1

int main() {
	// rec(1);
	rec2(1);
}
// 1이 끝나기도 전에 2를 호출
// 2가 끝나기도 전에 3을 호출
// 3이 끝나기도 전에 4를 호출
// 4가 끝나기도 전에 5를 호출 ... 무한 반복