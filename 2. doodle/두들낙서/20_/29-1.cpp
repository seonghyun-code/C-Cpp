#include <stdio.h>
/*
1.
100개 이하의 정수를 입력 받아
첫 줄에 짝수번째 순서대를 출력
둘째 줄에 홀수번째 숫자들을 순서대로 출력
ex)
입력 :
7
3 1 4 1 5 9 2
출력 :
1 1 9
3 4 5 2
*/
int main() {
	int arr[100];
	int n;

	printf("100개 이하의 숫자 개수 입력 : ");
	scanf_s("%d", &n);
	
	printf("%d개의 숫자 입력 : ", n);
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