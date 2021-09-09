#include <stdio.h>
struct Time {
	int h, m, s; // 시, 분, 초
}; // ; 붙이는 거 잊지 말기 '_^

int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main() {
	Time t = { 1, 22, 48 }; // 1h22m48s
	printf("%d\n", totalSec(t));
	return 0;
}