#include <stdio.h>
// 최대 최소
int main() {
	int n;
	int arr[100];
	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);

	// 최대 최소
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}

	printf("짝수의 개수 : %d", count);

}