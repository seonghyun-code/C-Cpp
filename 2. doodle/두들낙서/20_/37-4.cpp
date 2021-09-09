#include <stdio.h>
#include <string.h>

/*
4. 문자열을 매개변수로 받아서 그 문자열에서 공백을 제거하여 출력하는 함수 
*/

// 꺙
void printNoSpace(const char* str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	printf("\n");
}

// 정답
void printNoSpace2(const char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	printf("\n");
}

int main() {
	const char* ptr = "hello world";
	printNoSpace("Hello, World!\n");
	printNoSpace("My name is Doodle\n");
	
	printNoSpace2("Hello, World!\n");
	printNoSpace2("My name is Doodle\n");
	return 0;
}