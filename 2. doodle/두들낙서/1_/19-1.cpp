#include <stdio.h>
// 1. 시험 점수 입력
// 90 ~ 100 A
// 80 ~ 89 B
// 70 ~ 79 C
// 60 ~ 69 D
// 50 ~ 59 E
int main() {
	int score;
	printf("시험점수입력 : ");
	scanf_s("%d", &score);

	if (90 <= score && score <= 100) { // 90 <= score <= 100 이렇게 하면 ㄴㄴ..
		printf("A\n");
	}
	else if (80 <= score && score <= 89) {
		printf("B\n");
	}
	else if (70 <= score && score <= 79) {
		printf("C\n");
	}
	else if (60 <= score && score <= 69) {
		printf("D\n");
	}
	else if (50 <= score && score <= 59) {
		printf("E\n");
	}
	else {
		printf("***\n");
	}

	if (score > 100 || score < 0) {
		printf("잘못 입력하셨습니다.\n");
	}
	else if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80) {
		printf("B\n");
	}
	else if (score >= 70) {
		printf("C\n");
	}
	else if (score >= 60) {
		printf("D\n");
	}
	else if (score >= 50) {
		printf("E\n");
	}
	else {
		printf("눈물 나는 점수");
	}

	// shift + tab : 자동 줄맞춤
	return 0;
}