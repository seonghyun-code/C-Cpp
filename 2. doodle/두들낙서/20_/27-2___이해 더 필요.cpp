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
	���ؿ�:
	[1][2][3]
	[4][5][6]
	���� �ּ�: ������
	[1][2][3][4][5][6]
	row -> arr[0][0]
	col -> (row�� ����� �� == arr[0][0]�� �ּ�
	[0][0] : [1]
	[0][1] : [2]
	[0][2] : [3]
	[1][0] : [4]
	[1][1] : [5]
	[1][2] : [6]
	*/
	return 0;
}