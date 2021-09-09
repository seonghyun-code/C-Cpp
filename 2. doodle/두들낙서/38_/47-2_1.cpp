#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in;
	int n;
	in = fopen("47_input2.txt", "r"); // 없는 파일을 open
	printf("in = %d\n", in); // in = 0 출력
	// fscanf(in, "%d", &n); // 런타임 에러 : stream != nullptr
	fclose(in);
	return 0;
}

/*
ptr -> NULL
NULL : 아무것도 가리키고 있지 않다
*/