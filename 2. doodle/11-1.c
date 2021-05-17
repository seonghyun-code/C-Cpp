// 비교 연산자

#include <stdio.h>

int main() {
	int a, b;
	printf("a, b 입력 : ");
	scanf_s("%d%d", &a, &b); // 5 3
	
	// 참 : 1, 거짓 : 0
	int p = a > b;
	int q = a < b;
	int r = a == b; // == : 같다
	printf("%d\n", p); // 1
	printf("%d\n", q); // 0
	printf("%d\n\n", r); // 0

	// bool : 진리값을 저장용 변수 (1byte 크기)
	bool p2 = a > b;
	bool q2 = a < b;
	bool r2 = a == b;
	printf("%d\n", p2); // 1
	printf("%d\n", q2); // 0 
	printf("%d\n\n", r2); // 0

	bool p3 = a >= b;
	bool q3 = a <= b;
	bool r3 = a != b;
	printf("%d\n", p3); // 1
	printf("%d\n", q3); // 0 
	printf("%d\n", r3); // 1

	return 0;
}
