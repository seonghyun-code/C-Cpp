#include <stdio.h>
// c++ ���� ��� : struct �ȿ� �Լ� �ֱ�
// 42-1�� �ٲ㺸�� ^_^!
struct Time {
	int h, m, s; // ��, ��, ��
	
	int totalSec() {
		return 3600 * h + 60 * m + s;
	}

};

int main() {
	Time t = { 1, 22, 48 }; // 1h22m48s
	printf("%d\n", t.totalSec());
	return 0;
}