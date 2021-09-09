#pragma warning(disable:4996) // 오류 방지
#include <stdio.h> // stdio.h 라는 헤더파일을 포함시키겠다.
#include <string.h>

int main() {
	char str[100] = "Hello";
	printf("=== %s ===\n", str);

	printf("문자열의 길이 : %d!?\n", sizeof(str) / sizeof(char) - 1); // 99

	// 1. strlen
	int len = strlen(str);
	printf("문자열의 길이 : %d\n", len);

	// 2. strcpy
	char str2[100];
	strcpy(str2, str); // str2에 str을 복붙해달라
	printf("str2 : %s\n", str2);

	// 3. strcat
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	strcat(str2, " World!");
	printf("%s\n", str2);

	// 4. strcmp
	/*
	str이 str2보다 사전순으로 앞 : -1
	뒤 : 1
	같 : 0
	*/
	strcpy(str, "sample");
	strcpy(str2, "simple");

	int cmp = strcmp(str, str2);
	printf("%d", cmp);

	// c++ : string이라는 새로운 자료형 등장 :))
}