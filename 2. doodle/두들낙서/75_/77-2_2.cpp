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

class Derived2 : public Base {

};

Derived d;
Base* b = &d;

int main() {
	Base* b = b = new Derived();
	b->Print(); // b? d? ... 자동으로 정적바인딩 : Base
	delete b;

	b = new Derived2();
	b->Print(); // b? ??? 뭐여~~ ... 자동으로 정적바인딩 : Base
	delete b;
	return 0;
}


/*
이런식으로 하면 헷갈리니까
b->Print()라고 하면은 그냥 Base의 Print()를 호출하자!
*/

/*
바인딩 : 모호한 포인터들... 어떠한 타입을 가리킬지 결정하는 것
정적바인딩 : b라고 하면은 그냥 Base를 가리키는 걸로! (부모 클래스를 가리키도록)
동적바인딩 : b여도 상황에 따라 Derived가 될 수도, Derived2가 될 수도
c++ : 아무 짓도 하지 않으면 정적 바인딩
*/

/*
[결론]
1) 부모를 가리키는 포인터는 자식을 가리킬 수도 있다.
2) b->Print(); 이런식으로 되어있을 때
b가 현재 가리키고 있는 객체가 부모인지 자식인지 컴파일러가 판별하기 어렵다.
3) 따라서, c++에서는 아무 말 없으면 정적바이딩 발생(부모 클래스를 가리키도록)

*/