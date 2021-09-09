#include <stdio.h>

int main() {
	// 예제1
	int a = 5;
	int* ptr_a = &a;
	printf("a : %d => ", a);
	*ptr_a = 10;
	printf("%d\n", a);
	
	printf("ptr_a : %d\n", ptr_a);
	printf("ptr_a + 1 : %d\n\n\n", ptr_a + 1); // 1을 더했는데 4가 더해짐.
	/*
	int : 4byte이므로
	int a [][][][] (4byte)
	다음 공간은 4byte 이후!
	*/

	// 예제2
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr : %d\n", arr); // arr = &arr[0]	
	printf("arr : %d\n", arr + 1); // arr + 1 = &arr[1]
	// &arr[i] = arr + i

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	} // 4씩 더해짐!

	// 예제3
	printf("\n\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr);
	}
	return 0;
}