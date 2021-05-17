// switch문

#include <stdio.h>

int main() {
	int choice;
	printf("새 게임  : 1\n");
	printf("불러오기 : 2\n");
	printf("설정     : 3\n");
	printf("크레딧   : 4\n");
	scanf_s("%d", &choice); // 3

	printf("===== if문 =====\n");
	if (choice == 1) {
		printf("새 게임\n");
	}
	else if (choice == 2) {
		printf("불러오기\n");
	}
	else if (choice == 3) {
		printf("설정\n"); // 출력
	}
	else if (choice == 4){
		printf("크레딧\n");
	}
	else {
		printf("잘못 입력하셨습니다.\n");
	}

	printf("\n===== switch문 =====\n");
	switch (choice) {
	case 1:
		printf("새 게임\n");
		break;
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n"); // 출력
		break;
	case 4:
		printf("크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;
	}

	printf("\n===== switch문(no break) =====\n");
	switch (choice) {
	case 1:
		printf("새 게임\n");
	case 2:
		printf("불러오기\n");
	case 3:
		printf("설정\n"); // 출력
	case 4:
		printf("크레딧\n"); // 출력
	default:
		printf("잘못 입력하셨습니다.\n"); // 출력
	}

	printf("***");
	return 0;
}
