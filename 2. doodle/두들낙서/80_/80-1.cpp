#include <iostream>

using namespace std;

class A {
public:
	virtual void f(){ // 가상 함수(실제로 존재x)이지만 완벽한 가상은 X
		cout << "A::f()" << endl;
	} 
};

class B : public A {
public:
	void f(){
		cout << "B::f()" << endl;
	}
};

int main() {
	A* a = new A;
	a->f(); // 완벽했다면 A::f()가 출력되지 않아야 했긔.
	delete a;
	return 0;
}