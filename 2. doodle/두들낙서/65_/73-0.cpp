#include <iostream>

using namespace std;

// 0. ���� ���α׷��� ���� �����?

int main() {
	char str[] = "Hello, World!";
	cout << str << endl; // Hello, World!
	cout << *str << endl; // H

	/*
	str = str + 0 = &str[0]
	*str = str[0]
	*/

	// ���� �����ϱ�
	char* p_str = str;
	cout << p_str << endl; // Hello, World!
	cout << *p_str << endl; // H

	return 0;
}