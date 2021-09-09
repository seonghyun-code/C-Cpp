#include <stdio.h>


// call-by-reference
void doubleArr(int *arr) { // arr[4] = *arr
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2;
	}
}

void doubleArr2(int arr[2][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] *= 2;
		}
	}
}

void doubleArr2_2(int (*arr)[3]) { // arr[2][3] = (*arr) ... 배열 포인터
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] *= 2;
		}
	}
}

int main() {
	int arr[4] = { 1, 2, 3, 4 };
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	doubleArr(arr); // &arr[0]
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int arr2[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	doubleArr2(arr2);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	doubleArr2_2(arr2);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}