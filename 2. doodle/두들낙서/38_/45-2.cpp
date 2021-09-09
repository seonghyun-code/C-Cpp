#include <stdio.h>
/* 예제 3 */
#define MAX(A, B) (((A)>(B))? (A) : (B)) // 괄호로 뒤덮어 놓는 게 안전한 매크로
int max(int a, int b) {
	/*
	if (a > b) return a;
	return b;
	*/
	return (a > b) ? a : b; // 삼항연산자
}

int main() {
	printf("%d\n", max(1, 5));
	printf("%d\n", MAX(15, 10));
	return 0;
}