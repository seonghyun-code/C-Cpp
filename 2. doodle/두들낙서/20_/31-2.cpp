#include <stdio.h>

// 전역 변수
int _itemCnt = 0;
int _money = 100;

void buyItem() {
	// 아이템을 산다.
	_itemCnt++;
	_money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", _itemCnt);
	printf("  잔액 : %d\n", _money);
}

int main() {
	/* 함수 사용 이전 */
	// 지역 변수
	int itemCnt = 0;
	int money = 100;
	// 아이템을 산다.
	itemCnt++;
	money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
	
	/* 중략 */

	// 아이템을 산다.
	itemCnt++;
	money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);

	/* 함수 사용 이후 */
	buyItem();

	/* 중략 */

	buyItem();
	return 0;
}