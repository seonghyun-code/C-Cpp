#include <stdio.h>
/*
1.
100�� ������ ������ �Է� �޾�
ù �ٿ� ¦����° �����븦 ���
��° �ٿ� Ȧ����° ���ڵ��� ������� ���
ex)
�Է� :
7
3 1 4 1 5 9 2
��� :
1 1 9
3 4 5 2
*/
int main() {
	int arr[100];
	int n;

	printf("100�� ������ ���� ���� �Է� : ");
	scanf_s("%d", &n);
	
	printf("%d���� ���� �Է� : ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 1; i < n; i += 2) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i += 2) {
		printf("%d ", arr[i]);
	}

	return 0;
}