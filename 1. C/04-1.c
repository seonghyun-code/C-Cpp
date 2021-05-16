// 변수 이름 : 알파벳 대소문자, _(under score), 숫자
// 숫자는 첫번째 글자로 사용 불가
// 2a (x), a2(o), ABC(o), abc(o)

#include <stdio.h>

int main() {
	int a; // int형 변수 선언 (32 bit = 4 byte)
	a = 3; // = : 대입을 의미
	printf("%d\n", a);

	a = 2; // 대입
	printf("%d\n", a);
	return 0;
}
