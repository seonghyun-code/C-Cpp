#include <stdio.h>

int main() {
	int n; int sum = 0;
	scanf_s("%d", &n);
	// 1 + 2 + 4 + 5 + 7 + ...
	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);
	sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue;
		}
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}