/*
1. 두 숫자 입력 받아서 그 숫자들의 합을 출력하는 프로그램 만들기
*/

#include <stdio.h>

int main() {
	float a, b;
	printf("첫번째 숫자 입력 : ");
	scanf_s("%f", &a);
	printf("두번째 숫자 입력 : ");
	scanf_s("%f", &b);
	printf("%f + %f = %f", a, b, a + b);
	return 0;
}
