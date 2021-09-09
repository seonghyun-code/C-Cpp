// static_cast  : 정적(컴파일 타임에)
// dynamic_cast : 동적(런타임 타임에)

#include <iostream>

using namespace std;

class Base {
public:
	int x;
};

class Derived : public Base {
public:
	int y;
};

int main() {
	Base* b = new Derived;
	// 만약 b가 어떤 객체를 가리키고 있는지 모르는 상황이라면?
	Derived* d = static_cast<Derived*>(b);
	delete d;
	delete b;
	return 0;
}

// RTTI(Run Time Type Information/Identification)
/* b가 가리키고 있는 객체가 위에처럼 Base가 아닐 수도 있음.
[런타임]에 b가 가리키고 있는 객체로 가서 타입을 알 수 있게끔 해주는 기능
*/