#include <stdio.h>

int main() {
	int i, sum;
	for (i = 1, sum = 0; i <= 100; sum += i, i++); // sum += i을 한 후에 i++! 순서 주의
	printf("%d", sum);
	return 0;
}