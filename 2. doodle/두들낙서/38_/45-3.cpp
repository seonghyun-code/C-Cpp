#include <stdio.h>

#define FOR(I, S, E) for (int I = S; I <= E; I++)
#define LOOP while(true)

int main() {
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}
	printf("\n");
	FOR(i, 1, 10) {
		printf("%d ", i);
	}
	printf("\n");
	LOOP{
		printf("*");
	}
	return 0;
}