#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 자꾸 오류나는데 ㅎㅎ.. 왜일까;;; 원래는 아무 일도 없어야 함ㅠ_ㅠ
int main() {
	FILE* in;
	int n;
	
	in = fopen("47_input2.txt", "r");
	
	if (in != nullptr) {
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
	return 0;
}