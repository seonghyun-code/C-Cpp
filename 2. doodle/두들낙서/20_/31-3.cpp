#include <stdio.h>

// ���� ����
int itemCnt = 0;
int money = 100;
int cost;

void buyItem() {
	// �������� ���.
	itemCnt++;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
}

void buyItem2(int _cost) { // �Ű� ���� 1��
	// �������� ���.
	itemCnt++;
	money -= _cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
}

void buyItem3(int _cost, int cnt) { // �Ű� ���� 2��
	// ���� �������� ���.
	itemCnt += cnt;
	money -= _cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
}

int main() {
	cost = 30;
	buyItem();

	cost = 50;
	buyItem();

	// �Ű�����
	buyItem2(10);
	buyItem3(5, 7); // 7��¥�� ���� ������
	return 0;
}