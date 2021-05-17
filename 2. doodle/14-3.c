#include <stdio.h>

int main() {
	int i = 1;

	repeat:
	printf("%d\n", i); // 1 ~ 10 출력

	if (i < 10) {
		i++;
		goto repeat;
	}
	return 0;
}
