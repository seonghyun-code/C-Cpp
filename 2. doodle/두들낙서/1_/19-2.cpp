#include <stdio.h>
// 2. 자연수 입력 (12)
// 약수 출력 (1, 2, 3, 4, 6, 12)
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
	return 0;
}