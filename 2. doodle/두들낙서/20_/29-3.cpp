#include <stdio.h>
/* 3. 코드만 보고 답 유추 */
int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	printf("%d\n", arr); // &arr[0]

	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i));
	}
	/*
	... 위와 12 차이
	&arr[3] 1 ... 아래와 4 차이씩
	&arr[4] 5
	&arr[5] 9
	&arr[6] 2
	*/

	return 0;
}