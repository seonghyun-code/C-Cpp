// 객체 지향 프로그래밍 시작! ... 상속 개념이 아주 중요
/*
멤버 메소드 : ㅁ, 멤버 변수 : ㅇ
부모 클래스 [ㅁ, ㅁ, ㅇ, ㅇ, ... ]
자식 클래스 [부모의 멤버 ㅁ, ㅁ, ㅇ, ㅇ 이용 가능 + 자기 자신만의 멤버 ㅁ, ㅇ 이용 가능]

부모 클래스가 자식 클래스에 속한다? (X)
자식 클래스가 부모 클래스에 속하는 게 맞는 것!!

남자 & 총각
남자 : 1. 사람, 2. Y염색체
총각 : 1. 사람, 2. Y염색체, 3. 성인, 4. 미혼

남자가 총각이 포함되나욤? ㄴㄴ 총각이 남자에 포함되는 것.
*/
#include <iostream>

using namespace std;

class Base { // 부모 클래스를 c에서는 base라고 부름
public:
	void bFunc() {
		cout << "Hello!" << endl;
	}
	int bNum;
};

class Derived : public Base { // 자식 클래스를 파생 클래스
public:
	void dFunc() {
		cout << "Hello?" << endl;
	}
	int dNum;
};

int main() {
	Base b;
	Derived d;
	b.bFunc();
	b.bNum = 1;

	d.bFunc();
	d.bNum = 2;
	d.dFunc();
	d.dNum = 1;
	// b.dFunc(); // 불가능!
	return 0;
}