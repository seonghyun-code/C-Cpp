#include <stdio.h>
struct Time {
	int h, m, s; // ��, ��, ��
}; // ; ���̴� �� ���� ���� '_^

int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main() {
	Time t = { 1, 22, 48 }; // 1h22m48s
	printf("%d\n", totalSec(t));
	return 0;
}