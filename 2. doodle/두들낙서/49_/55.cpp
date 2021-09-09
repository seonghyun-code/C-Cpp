// this
#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis(MyClass *ptr) {
		cout << "나의 주소 : " << ptr << endl;
	}

	void PrintThis2() { // this : 보이지는 않는 매개변수
		cout << "this 주소 : " << this << endl;
	}

	/*
	이렇다고 보면 됨
	void PrintThis2(this) {
		cout << "this 주소 : " << this << endl;
	}
	*/

};

int main() {
	MyClass a, b;
	cout << "a의 주소  : " << &a << endl; // 16진법으로 나옴
	cout << "b의 주소  : " << &b << endl;
	a.PrintThis(&a);
	b.PrintThis(&b);
	a.PrintThis2(); // this -> &a
	b.PrintThis2(); // this -> &b
	return 0;
}

// 클래스 내부의 함수는 객체에 포함되어 있는게 아니라, 따로 저장되어 있음.
//a[ printThis ], b[ printThis ] (x)
// a, b, printThis (o)
// 대신 this라는 포인터를 매개변수로 받음으로써 지금 사용하는 printThis가 어느 객체 소속인지 알아낼 수 있음.