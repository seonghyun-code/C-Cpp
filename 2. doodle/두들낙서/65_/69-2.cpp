// strData ������ �� �� ����� �� �ƴ϶�, �ϳ��̵��� ... �̵� (move)
// �̵� �ø�ƽ

/*
() = ()
a = a;     // a : �º����� �� �� �ְ� �캯���� �� �� �����Ƿ� l-value
a + 3 = 5; // a + 3 : �캯���� �� �� �ִ� �� r-value
r-value : �캯���� �� �� �ִ� ��
������ �ᱣ��(ex. a + 3)�� r-value
*/

#include <iostream>

int f() { return 5; }

int main() {
	// f() = 1;
	// 1) 5 = 1 ���� �� ��!
	// 2) return ���� r-value

	// ��� : �ӽ� ��ü�� r-value��!
	return 0;
}