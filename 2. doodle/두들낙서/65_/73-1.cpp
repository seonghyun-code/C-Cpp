#include <iostream>

using namespace std;

// 1. ㅁ 부분에 알맞은 기호를 넣고 출력을 예측해보세요.
// 강의 13분 46초, 16분 49초 그림 꼭꼭 다시 볼 것!!!!!!!!!!

int main() {
	int a = 10, b = 20, c = 30;
	int* p = &a;
	int& r = b;
	int** pp = &p; // p라는 포인터를 가리키는 더블포인터 pp (24강) ... int* (*pp)
	int* (&rp) = p;// p라는 포인터를 가리키는 레퍼런스 변수 rp (51강)
	// ㄴ (int*) : 레퍼런스 변수(&rp)가 가리키고자 하는 것의 타입!

	r = c / *p; // b = 30/ 10 = 3
	rp = &c; // p -> c
	**pp = 40; // **pp = *(*pp) = *(p) = a 값 ... 이해 안 가면 뒤부터 봐, a = 40
	*p = 50; // c = 50
	*pp = &a; // p -> a
	*rp = 60; // a = 60

	cout << a << endl; // 60
	cout << b << endl; // 3
	cout << c << endl; // 50
	cout << *p << endl; // 60
	cout << r << endl; // 3
	cout << **pp << endl; // 60
	cout << *rp << endl; // 60
	return 0;
}

// tip : 레퍼런스는 가리키는 값을 바꿀 수 없음!!
//       r = a ... b에 a에 저장된 값을 대입해라ㅎㅎ