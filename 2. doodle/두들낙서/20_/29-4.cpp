#include <stdio.h>
/*
4. 10 * 10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷�
ex)
�Է� :
3 4
4 2 6 3
7 9 3 4
5 1 2 1
���:
15
23
9
*/

int main()
{
	int arr[10][10];
	int n, m;

	printf("[n x m ���]\n");
	printf("n : ");
	scanf_s("%d", &n);
	printf("m : ");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}

	return 0;
}