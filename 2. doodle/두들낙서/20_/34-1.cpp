#include <stdio.h>
// �̷��� �ϰ� �Ǹ��� walk -> rotate -> drawSquare ������ �����ؾ���.
// �ȱ�
void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}
// ����
void rotate(int angle) {
	printf("%d���� ȸ���߽��ϴ�.\n", angle);
}

// ���ڸ��� ���ƿ���
void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}

int main() {
	drawSquare();
	return 0;
}