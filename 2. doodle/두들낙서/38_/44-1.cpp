#include <stdio.h>
// ��� : ������ �ʴ� ��
// ���� : ���ϴ� ��
// const, ��ũ��, enum
// ����� �ַ� �빮�ڷ� ����!
int main() {
	const float PI = 3.14159;
	// PI *= 2; // ������! 
	printf("�� : %.2f\n", PI);
	printf("%PI : %d\n", &PI); // ����� �޸𸮿� �����!
	return 0;
}