#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	int* ptr = arr;
	// arr[i] = *(arr + i) = *(ptr + i) = ptr[i] = *(i + ptr) = i[ptr]
	for (int i = 0; i < 3; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 3; i++) {
		printf("%d ", i[ptr]); // 쓰지 말기
	}
	printf("\n");
	return 0;
}