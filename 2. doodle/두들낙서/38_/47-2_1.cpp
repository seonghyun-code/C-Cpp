#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in;
	int n;
	in = fopen("47_input2.txt", "r"); // ���� ������ open
	printf("in = %d\n", in); // in = 0 ���
	// fscanf(in, "%d", &n); // ��Ÿ�� ���� : stream != nullptr
	fclose(in);
	return 0;
}

/*
ptr -> NULL
NULL : �ƹ��͵� ����Ű�� ���� �ʴ�
*/