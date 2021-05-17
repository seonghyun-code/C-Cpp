// 제어문 : if, while , for 등 흐름을 제어하는 구문

#include <stdio.h>

int main() {
	int n;
	printf("n 입력 : ");
	scanf_s("%d", &n); // 5

	if (n % 2 == 0) {
		printf("%d : 짝수\n", n);
	}
	else {
		printf("%d : 홀수\n", n); // 실행
	}

	// 참 : 1, 거짓 : 0
	// if는 괄호 안에 들어있는 게 0이 아니면 무조건 실행
	if (1) {
		printf("***\n", n); // 실행
	}
	else {
		printf("$$$\n", n);
	}

	if (917) {
		printf("***\n", n); // 실행
	}
	else {
		printf("$$$\n", n);
	}

	if (0) {
		printf("***\n", n);
	}
	else {
		printf("$$$\n", n); // 실행
	}

	if ('a') {
		printf("***\n", n); // 실행
	}
	else {
		printf("$$$\n", n);
	}

	if (n % 2) {
		printf("%d : 홀수\n", n); // 실행
	}
	else {
		printf("%d : 짝수\n", n);
	}
	return 0;
}
