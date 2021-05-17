#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b); // 앰퍼샌드 & : 포인터
	// 분리되어있는 숫자를 구분해서 %d로 들어가는 것!
	// 스페이스 1번이든 100번이든, 엔터이든 구분만 되어있다면 하나의 %d로!

	// 1. 정수
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	
	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);

	// 2. 실수
	float c, d;
	scanf_s("%f%f", &c, &d);

	// 1) 변수에 저장해서 결과 출력
	float hap2 = c + d;
	float cha2 = c - d;
	float gop2 = c * d;
	float mok2 = c / d;

	printf("%f + %f = %f\n", c, d, hap2);
	printf("%f - %f = %f\n", c, d, cha2);
	printf("%f * %f = %f\n", c, d, gop2);
	printf("%f / %f = %f\n\n", c, d, mok2);
	
	// 2) 변수 없이 바로 결과 출력
	printf("%f + %f = %f\n", c, d, c + d);
	printf("%f - %f = %f\n", c, d, c - d);
	printf("%f * %f = %f\n", c, d, c * d);
	printf("%f / %f = %f\n", c, d, c / d);
	
	return 0;
}
