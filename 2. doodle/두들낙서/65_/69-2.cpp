// strData 공간이 세 개 생기는 게 아니라, 하나이도록 ... 이동 (move)
// 이동 시멘틱

/*
() = ()
a = a;     // a : 좌변에도 올 수 있고 우변에도 올 수 있으므로 l-value
a + 3 = 5; // a + 3 : 우변에만 올 수 있는 것 r-value
r-value : 우변에만 올 수 있는 것
연산의 결괏값(ex. a + 3)은 r-value
*/

#include <iostream>

int f() { return 5; }

int main() {
	// f() = 1;
	// 1) 5 = 1 말이 안 됨!
	// 2) return 값이 r-value

	// 결론 : 임시 객체는 r-value다!
	return 0;
}