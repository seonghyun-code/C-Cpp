// 반복문

#include <stdio.h>

int main() {
	// 1. while
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i); // 1 ~ 10
		i++;
	}
	printf("***\n");

	// 2. do while : 조건을 만족하지 않아도 최소 한 번은 실행
	do {
		printf("%d\n", i); // 11
		i++;
	} while (i < 10);
	return 0;
}
