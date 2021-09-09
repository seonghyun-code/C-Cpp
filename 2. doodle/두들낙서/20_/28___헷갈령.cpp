#include <stdio.h>
// ������ �迭 : �����͵��� �迭 (������ ������) [ptr1][ptr2][ptr3] ... ptr1 -> a, ptr2 -> b, ptr3 -> c
// �迭 ������ : �迭�� ����Ű�� ������ (������ �ϳ�) ptr -> arr[][][]
int main() {
	// ����1
	int a = 1; int b = 2; int c = 3; int d = 4;
	int* ptr[4]; // ����Ʈ �迭 ����, 4ĭ ������ ������

	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &d;
	ptr[3] = &b;

	printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
	
	// ����2
	int arr[4] = { 1, 2, 3, 4 };
	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
		printf("%d ", *ptr[i]);
	}
	printf("\n\n");

	// ����3
	char str[] = "Hello";
	printf("%s\n", str);
	printf("%s\n", &str[0]); // %s�� \0�� ���� ������ ���� ���

	char strings[3][10] = { "Hello", "World", "Doodle" };
	/*
	[H][e][l][l][o].....
	[W][o][r][l][d].....
	[D][o][o][d][l][e]....	
	*/
	for (int i = 0; i < 3; i++) {
		printf("%s ", strings[i]);
		printf("%s\n", &strings[i][0]);
	}

	char* p_str[3]; // p_str = [ptr1][ptr2][ptr3]
	for (int i = 0; i < 3; i++) {
		p_str[i] = strings[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%s ", p_str[i]);
	}
	printf("\n");

	return 0;
}