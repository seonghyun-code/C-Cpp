#include <stdio.h>
// 입력 받은 숫자들을 거꾸로 출력
int main() {
	/*
	int n;
	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);
	int arr[n]; // 오류남
	*/
	int n;
	int arr[1000]; // 공간을 넉넉하게 잡기
	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	return 0;
}