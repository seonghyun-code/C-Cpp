#include <iostream>
using namespace std;

// 레퍼런스 변수

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	/* 예제 1 */
	/*
	// 포인터
	int* p = &a;
	*p = 10; // a = 10
	
	// 레퍼런스 변수
	int& p = a;
	p = 10;
	*/

	int a(5);
	int& p = a;

	cout << p << endl;
	cout << a << endl;

	p = 10;

	cout << p << endl;
	cout << a << endl;

	/* 예제 2 */
	int c(5), d(7);
	swap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}