/* 7. 코드에서 오류가 날 부분 찾기 */
/*
1 2 3 4
5 6 7 8
9 10 11 12
*/

/*
#include <stdio.h>

int main(){
	int arr[3][4] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12}
	};

	int (*ptr)[4] = arr;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
		printf("%d ", *ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/

// 정답
#include <stdio.h>
int main() {
	int arr[3][4] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12}
	};

	int(*ptr)[4] = arr;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}