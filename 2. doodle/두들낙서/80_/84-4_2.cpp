#include <iostream>

using namespace std;

class Base { // 다형 클래스
public:
	virtual void f() {}
	int x;
};

class Derived : public Base {
public:
	void f() {}
	int y;
};

int main() {
	cout << sizeof(Base) << endl;    // 4 + 4 = 8
	cout << sizeof(Derived) << endl; // 8 + 4 = 12
	return 0;
}

// 4byte의 역할은? : 각 class들에 관한 정보가 담겨있음.
//    Base [포인터][x] = 8byte
// Derived [포인터][x][y] = 12byte
// 포인터들은 뭘 가리킬까?
// Base -> [*], Dervied -> [@]라고 하면

/*
Base* b = new Derived;일 때
b는 Base를 가리키는 포인터이기 떄문에 [포인터][x]까지만 가리킬 수 있음. ... 10분 그림
그러나 b 안에 포인터를 확인해보면 [@]를 가리키고 있음.
이걸 보고 aㅏ 얘가 Derived구나 하고 판별 ... (RTTI의 원리)
*/

// 결론
// dynamic_cast를 해주려면 Base 클래스는 하나 이상의 가상함수를 가진 다형 클래스여야 함.
// 다형 클래스만 RTTI를 지원하기 때문!