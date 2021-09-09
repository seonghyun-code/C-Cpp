// A. 메소드를 상수화 시킨다. (자기가 속한 클래스의 다른 변수를 건들 수 없도록 막아버리는 것
// ViewMoney()가 다른 클래스 변수를 건들 수 없도록

/* 상수형 매개변수와 메소드 */
// const
// 1. 매개변수의 상수화 (모든 함수)
// 2. 메소드의 상수화 (클래스의 멤버 메소드)

#include <iostream>

using namespace std;

class Account {
public:
	// 생성자
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		money += d;
		cout << d << "원을 예금했다!" << endl;
	}

	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!" << endl;
		}
	}

	int ViewMoney() const {
		// money++; // 여기 빨간 줄이 그어짐.
		return money;
	}

private:
	int money;
};

int main() {
	Account doodle(100);
	doodle.Deposit(100); // 100원 저축
	doodle.Draw(20); // 20원 인출
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	return 0;
}