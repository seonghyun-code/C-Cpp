#include <stdio.h>

/* 3. 실행 결과 예측 */
void rec(int n) {
	if (n == 0) {
		return;
	}
	printf("%d ", n);
	rec(n - 1);
	printf("%d ", n);
}

int main() {
	rec(5); // 5 4 3 2 1 1 2 3 4 5
	return 0;
}

/*
[5
	[4
		[3
			[2
				[1
					[]
				1]
			2]
		3]
	4]
5]
*/