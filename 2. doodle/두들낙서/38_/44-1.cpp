#include <stdio.h>
// 상수 : 변하지 않는 수
// 변수 : 변하는 수
// const, 매크로, enum
// 상수는 주로 대문자로 쓴다!
int main() {
	const float PI = 3.14159;
	// PI *= 2; // 빨간줄! 
	printf("π : %.2f\n", PI);
	printf("%PI : %d\n", &PI); // 상수도 메모리에 저장됨!
	return 0;
}