#include <stdio.h>

// ���� ����
int _itemCnt = 0;
int _money = 100;

void buyItem() {
	// �������� ���.
	_itemCnt++;
	_money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", _itemCnt);
	printf("  �ܾ� : %d\n", _money);
}

int main() {
	/* �Լ� ��� ���� */
	// ���� ����
	int itemCnt = 0;
	int money = 100;
	// �������� ���.
	itemCnt++;
	money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
	
	/* �߷� */

	// �������� ���.
	itemCnt++;
	money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);

	/* �Լ� ��� ���� */
	buyItem();

	/* �߷� */

	buyItem();
	return 0;
}