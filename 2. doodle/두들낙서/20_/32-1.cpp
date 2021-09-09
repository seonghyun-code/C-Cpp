#include <stdio.h>
// return : 돌려주다, 반환

// 2개의 매개변수(정수)의 합을 반환
int plus(int a, int b) {
	return a + b;
}

int noMeaning() {
	printf("first\n");
	return 1;
	// 이 아래로 실행 x
	printf("second\n");
	return 2;
}

void noMeaning2() {
	printf("first\n");
	return;
	// 이 아래로 실행 x
	printf("second\n");
	return;
}

int main() {
	int a;
	a = printf("aaaaa\n"); // 문자의 개수를 반환
	printf("%d\n", a); // 6

	int sum = plus(3, 5);
	printf("%d\n", sum); // 8

	sum = plus(3, 6) + 1; // 9 + 1
	printf("%d\n\n", sum); // 10

	a = noMeaning();
	printf("%d\n", a); // return을 만나면 그 즉시 함수 종료 => second는 출력 x

	noMeaning2();

	return 0; // 다 수행 했는데 return 문장이 없으면 자동으로 return 0 하게 됨.
}