#include <stdio.h>
// prototype : ����, ����ǰ / ���� ���ְ� ���Ǵ� ���߿�!
/*
����
1. ���ΰ� ���θ� ȣ���ϴ� ���
2. ������ �Ű� �� �ᵵ ����
3. � �Լ��� ����ϴ��� �ٷ� �� �� ����.
*/

// ���ڸ��� ���ƿ���
void drawSquare();
// �ȱ�
void walk(int);
// ����
void rotate(int);

int main() {
	drawSquare();
	return 0;
}

void drawSquare() {
	for (int i = 1; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}
void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}
void rotate(int angle) {
	printf("%d���� ȸ���߽��ϴ�.\n", angle);
}