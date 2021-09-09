#include <stdio.h>

#define PRINT_HELLO printf("Hello, World!\n");

#define SQUARE(X) X*X
#define SQUARE2(X) (X*X)
#define SQUARE3(X) ((X)*(X))
int main() {
	/* 예제 1 */
	PRINT_HELLO

	/* 예제 2 */
	int a = 5;
	printf("%d\n", SQUARE(a));
	printf("%d\n", 100 / SQUARE(a)); // 100 / 5 * 5 = 100
	printf("%d\n", 100 / (SQUARE(a))); // 100 / (5 * 5) = 4
	printf("%d\n", 100 / SQUARE2(a)); // 100 / (5 * 5) = 4

	printf("%d\n", SQUARE(a - 1)); // 5 - 1 * 5 - 1 = -1
	printf("%d\n", SQUARE((a - 1))); // (5 - 1) * (5 - 1) = 16
	printf("%d\n", SQUARE3(a - 1)); // (5 - 1) * (5 - 1) = 16
	return 0;
}