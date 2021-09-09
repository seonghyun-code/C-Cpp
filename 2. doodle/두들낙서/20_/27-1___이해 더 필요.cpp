#include <stdio.h>
// ����Ʈ �迭 : �迭�� ���ҵ��� ������!
// �迭 ������ : �迭�� ����Ű�� �ϳ��� ������

// �迭 ������ ����
int main() {
	// arr
	// [1][2][3]
	// [4][5][6]

	// arr[0] = [1][2][3]
	// arr[0][0] = [1]
	int arr[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
	};
	// ����1
	printf("===== ���� 1 ===\n");
	printf("%d\n", sizeof(arr)); // 4 * 6 = 24
	printf("%d\n", sizeof(arr[0])); // 4 * 3 = 12
	printf("%d\n", sizeof(arr[0][0])); // 4 * 1 = 4

	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[0][0]);

	// ����2
	printf("\n\n===== ���� 2 ===\n");
	int(*ptr)[3] = arr; // arr = &arr[0] : ù��° ���� ����Ŵ
	// arr
	// [1][2][3], ptr -> [1]
	// [4][5][6]
	// arr[i] = *(&arr[i]) = *(arr + i) = *(ptr + i) = ptr[i]
	// ptr[0] = arr[0] ... ptr[i] = arr[i]
	// ����, ptr[i][j] = arr[i][j]
	// ��, ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

	// �� �����غ���
	printf("%d\n", ptr); // ptr�� ����� �� : arr�� �ּ�
	printf("%d\n", *ptr); // ptr�� ����Ű�� ������ ����� ���̾�� �ϴµ�,,,
	printf("%d\n", &ptr); // ptr�� �ּ�
	printf("%d\n", sizeof(ptr)); // 4
	printf("%d\n", sizeof(ptr[0])); // 12
	printf("%d\n", sizeof(ptr[0][0])); // 4
	return 0;
}