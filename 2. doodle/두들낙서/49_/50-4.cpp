#include <iostream>
using namespace std;

int main() {
	/* ���� 3 */
	int a(5);
	int& r1 = a;
	// int& r2 = 3; // �޸𸮻� ���� �� �� ������ ����ų �� ����.
	// int& r3 = a * a; // �޸𸮻� ���� �� �� ������ ����ų �� ����.

	// r-value : ������ �� ���� ��
	// l-value : ������ �� �ִ� ��
	// int&& r1 = a; // lvalue
	int&& r2 = 3;
	int&& r3 = a * a;
	return 0;
}