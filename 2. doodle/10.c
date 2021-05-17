// 산술연산자 : 수학적인 연산
// + - * / % =
// += -= *= /= %=
// ++ --

#include <stdio.h>

int main() {
	printf("=== 대입 연산 ===\n");
	int a;
	a = 5; // = : 대입 연산! 같다는 뜻 아님.
	a = a + 3; // 8
	a += 3; // a = a + 3 => 11
	a -= 6; // a = a - 6 => 5
	a %= 7; // a = a % 7 => 5
	printf("a : %d\n", a);

	// 전치
	printf("=== 전치 증가 연산 ===\n");
	a = 10; int b;
	b = ++a; // a += 1 하고 나서 b = a
	printf("a : %d\nb : %d\n", a, b); // 11, 11

	// 후치
	printf("=== 후치 증가 연산 ===\n");
	a = 10;
	b = a++; // b = a 하고 나서 a += 1
	printf("a : %d\nb : %d\n", a, b); // 11, 10
	return 0;
}
