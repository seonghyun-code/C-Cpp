// 1. 다음 프로그램의 출력 결과는?

#include <iostream>
using namespace std;

int n = 0; // ::n = 0;
namespace A {
	int n = 0; // A::n = 0;
	namespace B {
		void set(){ n = 10; } // A::n = 10;
		int n = 0; // A::B::n = 0
	}
}

namespace C {
	void set(); // 선언과 정의가 분리
	int n = 0;
}

void C::set() { n = 20; } // C::n = 20;

int main() {
	using namespace A::B;

	set(); // A::n = 10;
	C::set(); // C::n = 20;

	cout << ::n << endl; // 0
	cout << A::n << endl; // 10
	cout << A::B::n << endl; // 0
	cout << C::n << endl; // 20
	return 0;
}