#include <stdio.h>
/* 2. 코드만 보고 답 유추 */
int main() {
	int a = 10;
	int b = 20;
	int* ptr;
	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a); // 30
	printf("%d\n", b); // 10
	printf("%d\n", *ptr); // 10
	return 0;
}