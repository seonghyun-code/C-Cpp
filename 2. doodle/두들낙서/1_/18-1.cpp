#include <stdio.h>
// break : 반복문 하나를 탈출

int main() {
	for (int i = 1; ; i++) {
		int k;
		scanf_s("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d번째 : %d\n", i, k);
	}
	return 0;
}