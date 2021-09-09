#include <iostream>

using namespace std;

class Base {
public:
	int a = 1;
};

class Drv1 : public Base {
public:
	void f() {
		cout << "Drv1::f()" << endl;
		cout << b << endl;
	}

	float b = 3.14;
};

class Drv2 : public Base {
public:
	void f() {
		cout << "Drv2::f()" << endl;
		cout << c << endl;
	}

	int c = 3;
};

int main() {
	Base* b = new Drv1; // 만약 얘가 Drv1을 가리키고 있었다면?
	Drv2* d2 = static_cast<Drv2*>(b);
	// 컴파일러는 b가 실제로 가리키고 있는 객체는 신경 안 씀.
	// 그래서 다운캐스팅을 시키는데 문제 x
	d2->f(); // 이상한 숫자가 뜸.
	delete d2;
	delete b;
	return 0;
}

/*
b는 Base를 가리키는 포인터
b[100]  -> Drv1
d2[100] -> Drv1 ... Drv1인데 Drv2로 착각 중

Drv1 : 한 칸에 4byte
[a = 1][b = 3.14]

d2->f()를 호출하면?
사실 f() method는 객체 안에 포함되어 있지 않고, 다른 곳에 저장.
대신 어떤 객체의 f()를 호출해야 되냐가 this로 넘어가는 것.
그래서 f를 다시 쓰면
void f(this) {
		cout << "Drv2::f()" << endl;
		cout << this->c << endl;
	}

만약 d2가 정상적으로 Drv2 객체를 가리켰다면
[a = 1][c = 3] // 3이 제대로 출력될 것.

그러나 drv1을 가리키고 있으므로
drv1가 drv2 객체인가보다~라고 생각
원래 같으면 c가 두번째 칸에 있을 거니까 두번쨰 칸을 살펴볼 것.
그리고 b는 컴퓨터에 2진수의 32bit 수로...^^
그래서 float를 int형태로 출력한 것.
3.14가 32비트의 01... 라고 저장되어 있을텐데 얘를 int로 해석해서 ㅠㅠ...
그래서 쓰레기 값은 아님ㅠ_ㅠ
*/

// 해결 => 84^_^