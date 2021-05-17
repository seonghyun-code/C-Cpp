// go to문
// 잊기 : 스파게티 코드가 될 수 있기 때문... ㅠ_ㅠ
// 유용한 점

#include <stdio.h>

int main() {
	int choice;

makeChoice:
	printf("새 게임  : 1\n");
	printf("불러오기 : 2\n");
	printf("설정     : 3\n");
	printf("크레딧   : 4\n");
	scanf_s("%d", &choice); // 100

	switch (choice) {
	case 1:
		printf("새 게임\n");
		break;
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n");
		break;
	case 4:
		printf("크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n\n");
		goto makeChoice; // 처음으로
		break;
	}
	printf("***");
	return 0;
}
