#include <iostream>

using namespace std;

class A { // 추상 클래스
public:
	virtual void f() = NULL // f() = 0이라고 해줘도 ㅇㅋ
};

class B : public A {
public:
	void f() { // 정의를 만들어줬으므로 B는 호출할 수 있었던 것^_^
		cout << "B::f()" << endl;
	}
};

int main() {
	// A* a = new A; // 순수 가상함수로 바뀌면서 접근 불가능해짐.
	A* a = new B; // 상속 받아와서 오버라이딩은 가능!
	a->f();
	delete a;
	return 0;
}

// A가 단 하나의 순수 가상함수라도 포함하고 있다면 객체 생성 불가
// 이런 걸 추상 클래스라고 부름!
// 자체만으로는 의미가 X