# include <stdio.h>
// 팩토리얼
// n! = n * (n-1)!

int factorial(int n) {
	if (n == 1) {
		printf("1 = ");
		return 1;
	}
	printf("%d * ", n);
	return n * factorial(n - 1);
}
// 실행 : 5 -> 4 -> 3 -> 2 -> 1
// 종료 : 1 -> 2 -> 3 -> 4 -> 5

int main() {
	printf("%d\n", factorial(5));
	return 0;
}