// 오버라이딩과 정적 바인딩

/* 오버라이딩 */
// overwrite : 덮어쓰다 (얘랑 헷갈리지 말 것!!!!!!)
// override : 우선하다 (부모 클래스와 동일한 이름의 멤버가 있을 때 자식 클래스의 멤버를 우선한다.)
// overload :         (이름이 같은 여러개의 함수를 정의할 수 있음)


#include <iostream>

using namespace std;

class Base {
public:
	int a = 10; // 생성자 없이 바로 초기화~ 예~
};

class Derived : public Base {
public:
	int a = 20;
};

int main() {
	Base b;
	Derived d;
	cout << b.a << endl; // 10
	cout << d.a << endl; // 20
	cout << d.Base::a << endl; // 10
	cout << d.Derived::a << endl; // 20
	return 0;
}

/*
Base [a] => Derived [a, Base에서 상속 받아 온 a]
이런 경우에 d.a라고 하면 고유의 a
Base의 a에 접근하고 싶다면~~ 명시해주면 됨.
즉, 자신의 고유 멤버가 우선한다!
*/