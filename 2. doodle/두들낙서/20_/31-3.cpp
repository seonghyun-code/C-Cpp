#include <stdio.h>

// 전역 변수
int itemCnt = 0;
int money = 100;
int cost;

void buyItem() {
	// 아이템을 산다.
	itemCnt++;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}

void buyItem2(int _cost) { // 매개 변수 1개
	// 아이템을 산다.
	itemCnt++;
	money -= _cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}

void buyItem3(int _cost, int cnt) { // 매개 변수 2개
	// 묶음 아이템을 산다.
	itemCnt += cnt;
	money -= _cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}

int main() {
	cost = 30;
	buyItem();

	cost = 50;
	buyItem();

	// 매개변수
	buyItem2(10);
	buyItem3(5, 7); // 7개짜리 묶음 아이템
	return 0;
}