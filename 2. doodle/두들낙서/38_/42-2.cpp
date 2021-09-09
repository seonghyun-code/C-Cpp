#include <stdio.h>
// c++ 전용 기능 : struct 안에 함수 넣기
// 42-1을 바꿔보자 ^_^!
struct Time {
	int h, m, s; // 시, 분, 초
	
	int totalSec() {
		return 3600 * h + 60 * m + s;
	}

};

int main() {
	Time t = { 1, 22, 48 }; // 1h22m48s
	printf("%d\n", t.totalSec());
	return 0;
}