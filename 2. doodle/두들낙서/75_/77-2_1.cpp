/* 정적 바인딩 */

#include <iostream>

using namespace std;

class Base {
public:
	void Print() {
		cout << "From Base!!!" << endl;
	}
};

class Derived : public Base {
public:
	void Print() {
		cout << "From Derived!!!" << endl;
	}
};

/*
int a;
char* p;
p = &a; // 타입 에러!
*/

Derived d;
Base* b = &d;

// 부모 클래스의 포인터가 자식 클래스를 가리킬 수 있음!
// Base: 남자, Derived: 총각
// 남자 포인터가 남자인 총각을 가리키는 건 문제 x

int main() {
	Base* b = new Derived();
	// 1) Derived 타입의 객체를 동적할당 하라.
	// 2) 그 객체의 주소를 b에 저장하라.
	b->Print(); // (*b).Print();
	delete b;
	return 0;
}

/*
b : Base를 가리키는 포인터
d : Derived 객체
b -> d인데 이때 Print()를 하면 뭘 호출할까!?
"From Base!!!" 호출됨
*/