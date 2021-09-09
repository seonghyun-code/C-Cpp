#include <iostream>
using namespace std;

// ���۷��� ����

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	/* ���� 1 */
	/*
	// ������
	int* p = &a;
	*p = 10; // a = 10
	
	// ���۷��� ����
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

	/* ���� 2 */
	int c(5), d(7);
	swap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}