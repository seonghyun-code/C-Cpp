#include <stdio.h>

int main() {
	int i = 10;
	for (;;) {
		printf("%d ", i);
	}
	// for문은 융통성있게 사용 가능 (무한루프)
	return 0;
}