#include <stdio.h>
/* ���� 3 */
#define MAX(A, B) (((A)>(B))? (A) : (B)) // ��ȣ�� �ڵ��� ���� �� ������ ��ũ��
int max(int a, int b) {
	/*
	if (a > b) return a;
	return b;
	*/
	return (a > b) ? a : b; // ���׿�����
}

int main() {
	printf("%d\n", max(1, 5));
	printf("%d\n", MAX(15, 10));
	return 0;
}