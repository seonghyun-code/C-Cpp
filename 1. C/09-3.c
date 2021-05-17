/*
3. 알파벳을 입력 받아서 그 다음 알파벳을 출력하는 프로그램 만들기
   (단, Z는 입력으로 주어지지 않는다고 가정 : Z 다음은 [이므로)
*/

#include <stdio.h>

int main() {
	char input;
	printf("알파벳 입력 : ");
	scanf_s("%c", &input);
	printf("%c\n", input + 1); // ASCII
	return 0;
}
