/*
2. 체중과 키를 입력 받아서 체질량 지수를 구하는 프로그램 만들기
*/

#include <stdio.h>

int main() {
	float weight, height;
	printf("몸무게 입력(kg) : ");
	scanf_s("%fkg", &weight);
	printf("키 입력(cm) : ");
	scanf_s("%fcm", &height);
	float bmi = 10000 * weight / (height * height);
	printf("체질량지수 : %.2f\n", bmi);
	return 0;
}
