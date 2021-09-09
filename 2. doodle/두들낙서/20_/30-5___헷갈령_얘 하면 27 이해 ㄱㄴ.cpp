#include <stdio.h>
/* 5. 코드만 보고 답 유추 */
int main() {
	int arr[3][3] = { 0 };

	/*
	[0][0][0]
	[0][0][0]
	[0][0][0]
	*/

	// arr = arr + 0 = &arr[0]인 것처럼
	// 첫번째행 arr[0] = arr[0] + 0 = &arr[0][0]
	// ... arr[0] = arr2라고 두고 보면 쉬움!

	printf("%d\n", &arr); // arr 전체 주소 = &arr[0][0]
	printf("%d\n", arr); // arr = &arr[0](첫번째 행의 주소) = &arr[0][0]
	printf("%d\n", *arr); // *(arr) = *(&arr[0]) = arr[0] = &arr[0][0]

	printf("%d\n", &arr[0]);
	printf("%d\n", arr[0]);
	printf("%d\n", *arr[0]); // *(arr[0]) = *(&arr[0][0]) = 0

	printf("%d\n", &arr[0][0]);
	printf("%d\n", arr[0][0]); // 0
}