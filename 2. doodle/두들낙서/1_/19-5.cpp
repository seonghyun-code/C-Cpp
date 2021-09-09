#include <stdio.h>
/*
4.
n = 4
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
*/
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}