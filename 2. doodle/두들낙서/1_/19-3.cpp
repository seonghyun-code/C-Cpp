#include <stdio.h>
// 3. 3, 6, 9 ���� (���� �ڸ� ���� 3, 6, 9�� ���)
// 1 2 * 4 5 7 8 * 10 11 12 * 14 15 * 17 ...
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9){
			printf("* ");
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}