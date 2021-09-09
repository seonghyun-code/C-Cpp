#include <stdio.h>
// array
int main() {
	// 예제1
	int a[5]; // a[5] : [][][][][]
	
	for (int i = 0; i <= 4; i++) {
		a[i] = i * 5;
		printf("%d ", a[i]);
	}
	printf("\n\n");

	// 예제2
	int arr[5] = { 3, 1, 4, 1, 5 };
	for (int i = 0; i <= 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	// 예제3
	int arr2[] = { 3, 1, 4, 1, 5, 9, 10, 12, 5, 3 };
	// int 4byte * 10개 = 40byte 
	// sizeof(arr2) / sizeof(int) = 40 / 4 = 10
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}