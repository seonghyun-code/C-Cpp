#include <stdio.h>
/*
1. ptr == &ptr[0]
2. *ptr == ptr[0]
3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� ��.
*/
int main() {
	int arr[3] = { 1, 2, 3 }; // sizeof(arr) = 12byte

	printf("arr = %d\n", arr); // arr = arr + 0 = &arr[0]
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr); // �迭 ��ü = ���ǻ� �� ��
	printf("&arr + 1 = %d\n\n", &arr + 1); // �� ���� �迭!
	// ptr + 1 = ptr + sizeof(*ptr)
	// &arr + 1 = &arr + sizeof(arr) = &arr + 12

	// �迭������ : �迭 ��ü�� ����Ű�� ������
	int(*ptr_arr)[3]; // (���� 3�� int�� �迭�� ����Ű��) ������ ptr_arr ����
	ptr_arr = &arr; // ��Ȯ���� �� �� �ּҸ� ����

	for (int i = 0; i < 3; i++) {
		printf("%d ", (*ptr_arr)[i]);
	}
	return 0;
}