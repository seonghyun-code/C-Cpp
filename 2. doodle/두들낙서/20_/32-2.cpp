#include <stdio.h>

// ���� ����
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) { // �Ű� ���� 2��
	// ���� �������� ���.
	if (money >= cost) {
		itemCnt += cnt;
		money -= cost;
		printf("�������� �����߽��ϴ�.\n");
		printf("  ������ ���� : %d\n", itemCnt);
		printf("  �ܾ� : %d\n", money);
		return 0;
	}
	else {
		printf("�ܾ��� �����մϴ�.\n");
		return -1;
	}
}

int buyItem2(int cost, int cnt) { // �Ű� ���� 2��
	// ���� �������� ���.
	if (money < cost) {
		printf("�ܾ��� �����մϴ�.\n");
		return -1;
	}
	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
	return 0;
}

int main() {
	int result;
	result = buyItem(3000, 5);
	result = buyItem(50, 5);
	result = buyItem2(3000, 5);
	result = buyItem2(50, 5);
	return 0;
}