#include <stdio.h>
/*
1. ptr == &ptr[0]
2. *ptr == ptr[0]
3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값.
*/
int main() {
	int arr[3] = { 1, 2, 3 }; // sizeof(arr) = 12byte

	printf("arr = %d\n", arr); // arr = arr + 0 = &arr[0]
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr); // 배열 전체 = 편의상 맨 앞
	printf("&arr + 1 = %d\n\n", &arr + 1); // 그 다음 배열!
	// ptr + 1 = ptr + sizeof(*ptr)
	// &arr + 1 = &arr + sizeof(arr) = &arr + 12

	// 배열포인터 : 배열 자체를 가리키는 포인터
	int(*ptr_arr)[3]; // (길이 3인 int형 배열을 가리키는) 포인터 ptr_arr 선언
	ptr_arr = &arr; // 정확히는 맨 앞 주소를 저장

	for (int i = 0; i < 3; i++) {
		printf("%d ", (*ptr_arr)[i]);
	}
	return 0;
}