/* 동적 할당 */
// 유동적으로 메모리를 할당한다.
// 프로그램 실행 중에 변수를 메모리에 할당하는 것(원하는 시기에 할당하고 해제하고)
// 정적 할당 : ex) int a; ... 전역변수/지역변수는 프로그램/함수 시작(할당), 종료(해제) 

#include <iostream>

using namespace std;

/* 여러가지 변수 선언 스타일
int a(5);
int a = 5;
int a = int(5); */

int main() {
	int* a = new int(5);
	/*
	new int
	1) int 크기의 공간이 만들어짐(할당)
	2) 그 공간 안에 5가 들어감
	3) 5의 주소를 반환함.
	int * a = new int(5);
	4) a 안에 5의 주소가 들어감.
	*/

	cout << a << endl;
	cout << *a << endl;
	
	*a = 10;
	
	cout << a << endl;
	cout << *a << endl;

	delete a; // 메모리 해제 ... 안 해주면 계속 남는다. ㅠ_ㅠ
	return 0;
}