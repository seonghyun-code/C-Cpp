#include <stdio.h>
// 포인트 배열 : 배열의 원소들이 포인터!
// 배열 포인터 : 배열을 가리키는 하나의 포인터

// 배열 포인터 예제
int main() {
	// arr
	// [1][2][3]
	// [4][5][6]

	// arr[0] = [1][2][3]
	// arr[0][0] = [1]
	int arr[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
	};
	// 예제1
	printf("===== 예제 1 ===\n");
	printf("%d\n", sizeof(arr)); // 4 * 6 = 24
	printf("%d\n", sizeof(arr[0])); // 4 * 3 = 12
	printf("%d\n", sizeof(arr[0][0])); // 4 * 1 = 4

	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[0][0]);

	// 예제2
	printf("\n\n===== 예제 2 ===\n");
	int(*ptr)[3] = arr; // arr = &arr[0] : 첫번째 행을 가리킴
	// arr
	// [1][2][3], ptr -> [1]
	// [4][5][6]
	// arr[i] = *(&arr[i]) = *(arr + i) = *(ptr + i) = ptr[i]
	// ptr[0] = arr[0] ... ptr[i] = arr[i]
	// 따라서, ptr[i][j] = arr[i][j]
	// 즉, ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

	// 꺙 생각해보기
	printf("%d\n", ptr); // ptr에 저장된 값 : arr의 주소
	printf("%d\n", *ptr); // ptr이 가리키는 변수에 저장된 값이어야 하는데,,,
	printf("%d\n", &ptr); // ptr의 주소
	printf("%d\n", sizeof(ptr)); // 4
	printf("%d\n", sizeof(ptr[0])); // 12
	printf("%d\n", sizeof(ptr[0][0])); // 4
	return 0;
}