#include <stdio.h>

int main() {
	int n;
	printf("n 입력 : ");
	scanf_s("%d", &n); // 5

	if (n > 0) {
		printf("n : 양수\n"); // 실행
	}
	else if (n == 0) {
		printf("n : 0\n");
	}
	else if (n == -7) {
		printf("n : -7\n");
	}
	else {
		printf("n : -7이 아닌 음수\n");
	}
	return 0;
}
