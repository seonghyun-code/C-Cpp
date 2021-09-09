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

	int ViewMoney() {
		money++; // 일부러... 원래 이러면 안 됨 => Q. 어떻게 이런 실수를 방지할 수 있을까?
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