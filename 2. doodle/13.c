// 중첩 if문
// 중괄호 코딩 스타일

#include <stdio.h>

int main() {
	int a, b, c;
	printf("a, b, c 입력 : ");
	scanf_s("%d%d%d", &a, &b, &c);
	// 1 : 나의 최애..ㅎ
	if (a > b) {
		if (a > c) {
			printf("max : %d\n", a);
		}
		else {
			printf("max : %d\n", c);
		}
	}
	else { // b > a
		if (b > c) {
			printf("max : %d\n", b);
		}

		else {
			printf("max : %d\n", c);
		}
	}

	// 2
	if (a > b) {
		if (a > c) { // a가 맥스
			printf("max : %d\n", a);
		}
		else { // c > a > b
			printf("max : %d\n", c);
		}
	}
	else if (b > c) { // b가 맥스
		printf("max : %d\n", b);
	}
	else { // c > b
		printf("max : %d\n", c);
	}

	// 3
	if (a > b) {
		if (a > c)printf("max : %d\n", a);
		else printf("max : %d", c);
	}
	else if (b > c)printf("max : %d\n", b);
	else printf("max : %d\n", c);
	return 0;
}

/*
// 4
if () {

} else if () {

} else {

}
*/
