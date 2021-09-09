#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 자기 자신을 출력하는 코드
/*
feof : 파일을 끝까지 읽으면 true 반환, 읽지 못하면 false 반환
end of file의 약자임 'v'
file 읽기 성공 시 !를 붙였으니까 => false가 됨
*/
// 마지막에 }} : 최초 1 바퀴까지는 feof가 false -> 도달한 후에 true
// 그래서 한 바퀴 더 도는 데 올 문자가 없으니까 }를 한 번 더 }
int main() {
	FILE* in = fopen("47-3_1.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}
	fclose(in);
	return 0;
}