#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in, *out; // ��Ʈ��
	int n;

	in = fopen("47_input.txt", "r"); // �б�
	out = fopen("47_output.txt", "w"); // ����

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	printf("%d �Է� �Ϸ�\n", n);
	fclose(in);
	fclose(out);
	// c��� : fclose ������ �ʾƵ� �ڵ����� �ݾ���!
	// �ٸ�, ���� ������ �����Ƿ� �ٷ� �ݾ��ִ� ����

	out = fopen("47_output.txt", "a"); // �̾� ����
	fprintf(out, "%d\n", n);
	printf("%d �Է� �Ϸ�\n", n);
	fclose(out);
	return 0;
}