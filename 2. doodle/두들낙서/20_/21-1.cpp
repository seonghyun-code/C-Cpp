#include <stdio.h>
// �Է� ���� ���ڵ��� �Ųٷ� ���
int main() {
	/*
	int n;
	printf("�Է��� ������ ���� : ");
	scanf_s("%d", &n);
	int arr[n]; // ������
	*/
	int n;
	int arr[1000]; // ������ �˳��ϰ� ���
	printf("�Է��� ������ ���� : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	return 0;
}