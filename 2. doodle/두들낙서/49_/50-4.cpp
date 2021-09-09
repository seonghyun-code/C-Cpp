#include <iostream>
using namespace std;

int main() {
	/* 예제 3 */
	int a(5);
	int& r1 = a;
	// int& r2 = 3; // 메모리상에 저장 안 된 공간은 가리킬 수 없다.
	// int& r3 = a * a; // 메모리상에 저장 안 된 공간은 가리킬 수 없다.

	// r-value : 수정할 수 없는 값
	// l-value : 수정할 수 있는 값
	// int&& r1 = a; // lvalue
	int&& r2 = 3;
	int&& r3 = a * a;
	return 0;
}