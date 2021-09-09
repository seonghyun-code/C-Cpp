#include <iostream>

using namespace std;

class Account {
public:
	// 생성자
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		d = money; // Q. 만약 이렇게 실수를 했다면?
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
		return money;
	}

private:
	int money;
};

int main() {
	Account doodle(200);
	doodle.Deposit(100); // 100원 저축해야 하는데.. 200
	doodle.Draw(20); // 20원 인출
	cout << doodle.ViewMoney() << endl; // 280이 나와야 하는데.. 380
	return 0;
}