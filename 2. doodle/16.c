// for문 : 일정하게 증가/감소되는 변수가 필요할 때
//         배열의 모든 원소에 순차적으로 접근하고 싶을 때
//		   특정 횟수만큼 작업을 반복하고 싶을 때

#include <stdio.h>

int main() {
	// 예제1
	int i = 1;
	for (i = 1; i <= 10; i++) {
		printf("%d ", i); // 1 ~ 10
	}
	printf("%d\n", i); // 11

	// 예제2
	int n = 33;
	for (int j = 1; j <= n; j *= 2) {
		printf("%d ", j); // 1, 2, 4, 8, ... 32
	}
	// printf("%d\n", j); // 오류남. (왜냐면 변수의 범위 : 중괄호 안!)

	// 예제3: 1 ~ n까지 숫자의 합을 출력
	n = 100;
	int sum = 0;
	for (int j = 1; j <= n; j++) {
		sum += j; // 1 + 2 + ... + 100 = 5050
	}
	printf("\n%d\n", sum);

	// 예제4
	n = 7;
	for (int j = 1; j <= n; j++) {
		printf("*"); // *******
	}
	return 0;
}
