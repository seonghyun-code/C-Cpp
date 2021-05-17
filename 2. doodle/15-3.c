#include <stdio.h>

int main() {
	// do while이 필요한 상황
	int n;
	do {
		printf("제발 0을 입력해주세요!!\n");
		scanf_s("%d", &n);
	} while (n != 0);
	printf("드디어 0을 입력 하셨군요!");
	return 0;
}
