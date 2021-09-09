// 형변환 ... 업캐스팅 Upcasting (자식클래스 포인터 -> 부모클래스 포인터로 묵시적)

#include <iostream>

using namespace std;

int main() {
	double a = 1; // int형 자료형 1이 묵시적으로 double형으로 형변환

	Derived* d = new Derived;
	Base* b = d; // 자식클래스로부터 부모클래스로 묵시적 형변환

	return 0;
}