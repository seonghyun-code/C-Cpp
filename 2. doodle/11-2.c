// 논리 연산자 (그리고, 또는, ...)
// && AND
// || OR
// ! NOT

#include <stdio.h>

int main() {
	int a;
	printf("a 입력 : ");
	scanf_s("%d", &a); // 7

	bool p = a >= 1 && a <= 10; // 1 <= a <= 10
	// bool p = (a >= 1) && (a <= 10); 와 같다
	bool q = a == 3 || a == 7;
	bool r = !q;

	printf("%d\n", p); // 1
	printf("%d\n", q); // 1
	printf("%d\n", r); // 0
	return 0;
}
