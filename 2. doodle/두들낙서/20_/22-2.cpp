#include <stdio.h>

// �Ľ�Į�� �ﰢ��
/*
1
11
121
1331
j == 0 || j == 1 -> 1
i�� j�� = [i -1, j-1] + [i - 1, j]
*/

int main() {
	int p[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				p[i][j] = 1;
			}
			else {
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
			}
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}