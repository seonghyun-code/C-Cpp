#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �ڲ� �������µ� ����.. ���ϱ�;;; ������ �ƹ� �ϵ� ����� �Ԥ�_��
int main() {
	FILE* in;
	int n;
	
	in = fopen("47_input2.txt", "r");
	
	if (in != nullptr) {
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
	return 0;
}