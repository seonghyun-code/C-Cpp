#include <stdio.h>

int main() {
	int n = 5;
	int i = 0, t = 1;
	while (i <= n) {
		printf("2^%d = %d\n", i, t);
		i++;
		t *= 2;
	}

	printf("\n");
	
	t = 1;
	for (int j = 0; j <= n; j++) {
		printf("2^%d = %d\n", j, t);
		t *= 2;
	}
	
	printf("\n");
	
	for (int j = 0, tt = 1; j <= n; j++, tt *= 2) {
		printf("2^%d = %d\n", j, tt);
	}
	return 0;
}