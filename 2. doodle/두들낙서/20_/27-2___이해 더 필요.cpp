#include <stdio.h>

int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int* col = *row; col < *row + 3; col++) {
			printf("%d ", *col);
		}
		printf("\n");
	}
	/*
	捞秦侩:
	[1][2][3]
	[4][5][6]
	角力 林家: 楷加利
	[1][2][3][4][5][6]
	row -> arr[0][0]
	col -> (row俊 历厘等 蔼 == arr[0][0]狼 林家
	[0][0] : [1]
	[0][1] : [2]
	[0][2] : [3]
	[1][0] : [4]
	[1][1] : [5]
	[1][2] : [6]
	*/
	return 0;
}