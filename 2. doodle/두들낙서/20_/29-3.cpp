#include <stdio.h>
/* 3. �ڵ常 ���� �� ���� */
int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	printf("%d\n", arr); // &arr[0]

	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i));
	}
	/*
	... ���� 12 ����
	&arr[3] 1 ... �Ʒ��� 4 ���̾�
	&arr[4] 5
	&arr[5] 9
	&arr[6] 2
	*/

	return 0;
}