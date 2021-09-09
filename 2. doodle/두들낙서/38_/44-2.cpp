#include <stdio.h>

// 매크로
#define PI 3.14159 // 3.14159에 PI라는 별칭

int main() {
	printf("π : %.2f\n", PI);
	// PI = 3; // 변경 불가
	// printf("%PI : %d\n", &PI); // 메모리 상에 저장이 안 되어있음!
	return 0;
}