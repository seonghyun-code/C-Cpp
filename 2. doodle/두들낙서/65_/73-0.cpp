#include <iostream>

using namespace std;

// 0. 다음 프로그램의 실행 결과는?

int main() {
	char str[] = "Hello, World!";
	cout << str << endl; // Hello, World!
	cout << *str << endl; // H

	/*
	str = str + 0 = &str[0]
	*str = str[0]
	*/

	// 쉽게 생각하기
	char* p_str = str;
	cout << p_str << endl; // Hello, World!
	cout << *p_str << endl; // H

	return 0;
}