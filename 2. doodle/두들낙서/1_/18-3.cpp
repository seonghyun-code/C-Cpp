#include <stdio.h>
// ��ø for��
int main() {
	int n;
	scanf_s("%d", &n);
	
	// ���簢��
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");

	// �����ﰢ��
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}