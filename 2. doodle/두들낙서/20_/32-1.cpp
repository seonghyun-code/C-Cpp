#include <stdio.h>
// return : �����ִ�, ��ȯ

// 2���� �Ű�����(����)�� ���� ��ȯ
int plus(int a, int b) {
	return a + b;
}

int noMeaning() {
	printf("first\n");
	return 1;
	// �� �Ʒ��� ���� x
	printf("second\n");
	return 2;
}

void noMeaning2() {
	printf("first\n");
	return;
	// �� �Ʒ��� ���� x
	printf("second\n");
	return;
}

int main() {
	int a;
	a = printf("aaaaa\n"); // ������ ������ ��ȯ
	printf("%d\n", a); // 6

	int sum = plus(3, 5);
	printf("%d\n", sum); // 8

	sum = plus(3, 6) + 1; // 9 + 1
	printf("%d\n\n", sum); // 10

	a = noMeaning();
	printf("%d\n", a); // return�� ������ �� ��� �Լ� ���� => second�� ��� x

	noMeaning2();

	return 0; // �� ���� �ߴµ� return ������ ������ �ڵ����� return 0 �ϰ� ��.
}