#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); // 100번지
	int* b = new int(3); // 200번지

	*a = *b; // 100번지에 저장되어있는 값(5)을 3으로 바꿔라.

	cout << *a << *b << endl;

	delete a;
	delete b;
	return 0;
}


//  a = b  얕은 복사(참조만 복사) ... 주소값이 바뀜
// *a = *b 깊은 복사(값을 복사) ... 값 자체가 바뀜