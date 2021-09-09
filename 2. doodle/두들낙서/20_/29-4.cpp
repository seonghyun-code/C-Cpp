#include <stdio.h>
/*
4. 10 * 10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램
ex)
입력 :
3 4
4 2 6 3
7 9 3 4
5 1 2 1
출력:
15
23
9
*/

int main()
{
	int arr[10][10];
	int n, m;

	printf("[n x m 행렬]\n");
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