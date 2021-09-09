#include <stdio.h>
#include <stdlib.h> // standard library, rand, srand
#include <time.h> // time(NULL)

// 난수 발생

int main() {
	for (int i = 1; i < 10; i++) {
		printf("%d ", rand());
	}
	printf("\n");

	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10); // 0 ~ 9까지의 수
	}
	printf("\n");

	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10 + 1); // 1 ~ 10까지의 수
	}
	printf("\n");
	// 여기까지는 몇 번을 실행해도 같은 난수 발생 => seed를 초기화 해줘야

	printf("%d\n", time(NULL)); // 1970/01/01 00:00:00로부터 지난 시간 (초 단위)
	srand(time(NULL)); // seed 초기화
	for (int i = 1; i < 10; i++) {
		printf("%d ", rand() % 10 + 1); // 1 ~ 10까지의 수
	}
	return 0;
}