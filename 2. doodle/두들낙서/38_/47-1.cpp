#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in, *out; // 스트림
	int n;

	in = fopen("47_input.txt", "r"); // 읽기
	out = fopen("47_output.txt", "w"); // 쓰기

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	printf("%d 입력 완료\n", n);
	fclose(in);
	fclose(out);
	// c언어 : fclose 해주지 않아도 자동으로 닫아줌!
	// 다만, 개수 제한이 있으므로 바로 닫아주는 습관

	out = fopen("47_output.txt", "a"); // 이어 쓰기
	fprintf(out, "%d\n", n);
	printf("%d 입력 완료\n", n);
	fclose(out);
	return 0;
}