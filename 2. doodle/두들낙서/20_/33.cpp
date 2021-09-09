#include <stdio.h>
// call-by-value
// call-by-reference

// call-by-value
void swapValue(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

// call-by-reference
void swapRef(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

// c++ : reference 변수
void swapRef2(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}


int main() {
	int a = 1; int b = 2;
	swapValue(a, b); // a, b의 '값'이 넘어가는 것.
	printf("a : %d, b : %d\n", a, b);

	swapRef(&a, &b); // a, b 변수를 참조하는 것.
	printf("a : %d, b : %d\n", a, b);

	swapRef2(a, b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}