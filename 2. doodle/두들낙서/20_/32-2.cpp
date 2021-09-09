#include <stdio.h>

// 전역 변수
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) { // 매개 변수 2개
	// 묶음 아이템을 산다.
	if (money >= cost) {
		itemCnt += cnt;
		money -= cost;
		printf("아이템을 구매했습니다.\n");
		printf("  아이템 개수 : %d\n", itemCnt);
		printf("  잔액 : %d\n", money);
		return 0;
	}
	else {
		printf("잔액이 부족합니다.\n");
		return -1;
	}
}

int buyItem2(int cost, int cnt) { // 매개 변수 2개
	// 묶음 아이템을 산다.
	if (money < cost) {
		printf("잔액이 부족합니다.\n");
		return -1;
	}
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
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