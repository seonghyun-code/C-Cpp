#pragma warning(disable:4996) // ���� ����
#include <stdio.h> // stdio.h ��� ��������� ���Խ�Ű�ڴ�.
#include <string.h>

int main() {
	char str[100] = "Hello";
	printf("=== %s ===\n", str);

	printf("���ڿ��� ���� : %d!?\n", sizeof(str) / sizeof(char) - 1); // 99

	// 1. strlen
	int len = strlen(str);
	printf("���ڿ��� ���� : %d\n", len);

	// 2. strcpy
	char str2[100];
	strcpy(str2, str); // str2�� str�� �����ش޶�
	printf("str2 : %s\n", str2);

	// 3. strcat
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	printf("%s\n", str2);

	// 4. strcmp
	/*
	str�� str2���� ���������� �� : -1
	�� : 1
	�� : 0
	*/
	strcpy(str, "sample");
	strcpy(str2, "simple");

	int cmp = strcmp(str, str2);
	printf("%d", cmp);

	// c++ : string�̶�� ���ο� �ڷ��� ���� :))
}