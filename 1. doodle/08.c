/*
char : 1byte 정수형 (int : 4byte)
character : 문자(반각문자Halfwidth ABCabc123_+\;/#&%) <-> 한글, 한자, 일본어...
*/

#include <stdio.h>

int main() {
	char a = 67;
	printf("%d\n", a);
	printf("%c\n", a);
	printf("%c\n", 'C');
	printf("%d\n", 'C');
	// 'C' == 67
	// ASCII : American Standard (문자 - 숫자)

	char b;
	printf("문자 입력 : ");
	scanf_s("%c", &b);
	printf("%c의 ASCII 값: %d\n\n", b, b);

	int c;
	printf("숫자 입력 : ");
	scanf_s("%d", &c);
	printf("%d의 ASCII 문자: %c\n", c, c);
	return 0;
}
