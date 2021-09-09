#include <stdio.h>
// 중첩 for문
int main() {
	int n;
	scanf_s("%d", &n);
	
	// 정사각형
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");

	// 직각삼각형
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}