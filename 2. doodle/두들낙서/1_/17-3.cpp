#include <stdio.h>

int main() {
	int i, sum;
	for (i = 1, sum = 0; i <= 100; sum += i, i++); // sum += i�� �� �Ŀ� i++! ���� ����
	printf("%d", sum);
	return 0;
}