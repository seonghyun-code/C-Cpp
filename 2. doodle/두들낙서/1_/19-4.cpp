#include <stdio.h>
/*
4. 
n = 4
1
1 3
1 3 5
1 3 5 7
*/
int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", 2 * j - 1);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1, k = 1; j <= i; k += 2, j++) {
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}