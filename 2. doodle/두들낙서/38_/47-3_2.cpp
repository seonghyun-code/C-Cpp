#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in = fopen("47-3_2.cpp", "r");
	char ch;
	while (fscanf(in, "%c", &ch) != EOF) { // 파일 끝에 도달하면 EOF를 반환
		printf("%c", ch);
	}
	fclose(in);
	return 0;
}