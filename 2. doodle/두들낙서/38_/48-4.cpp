#include <stdio.h>
#include <stdlib.h> // standard library, rand, srand
#include <time.h> // time(NULL)

// ���� �߻�

int main() {
	for (int i = 1; i < 10; i++) {
		printf("%d ", rand());
	}
	printf("\n");

	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10); // 0 ~ 9������ ��
	}
	printf("\n");

	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10 + 1); // 1 ~ 10������ ��
	}
	printf("\n");
	// ��������� �� ���� �����ص� ���� ���� �߻� => seed�� �ʱ�ȭ �����

	printf("%d\n", time(NULL)); // 1970/01/01 00:00:00�κ��� ���� �ð� (�� ����)
	srand(time(NULL)); // seed �ʱ�ȭ
	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10 + 1); // 1 ~ 10������ ��
	}
	return 0;
}