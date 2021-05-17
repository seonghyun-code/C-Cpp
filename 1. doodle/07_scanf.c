// scanf 보안 문제, 그냥 scanf_s 쓰자^^!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n);
	return 0;
}
