#include <stdio.h>
/* 5. �ڵ常 ���� �� ���� */
int main() {
	int arr[3][3] = { 0 };

	/*
	[0][0][0]
	[0][0][0]
	[0][0][0]
	*/

	// arr = arr + 0 = &arr[0]�� ��ó��
	// ù��°�� arr[0] = arr[0] + 0 = &arr[0][0]
	// ... arr[0] = arr2��� �ΰ� ���� ����!

	printf("%d\n", &arr); // arr ��ü �ּ� = &arr[0][0]
	printf("%d\n", arr); // arr = &arr[0](ù��° ���� �ּ�) = &arr[0][0]
	printf("%d\n", *arr); // *(arr) = *(&arr[0]) = arr[0] = &arr[0][0]

	printf("%d\n", &arr[0]);
	printf("%d\n", arr[0]);
	printf("%d\n", *arr[0]); // *(arr[0]) = *(&arr[0][0]) = 0

	printf("%d\n", &arr[0][0]);
	printf("%d\n", arr[0][0]); // 0
}