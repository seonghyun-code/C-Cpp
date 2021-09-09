// A. 이런 실수를 방지하기 위해 매개 변수도 상수화를 시키자.

#include <iostream>

using namespace std;

class Account {
public:
	// 생성자
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		// d = money; // 빨간 줄
		money += d;
		cout << d << "원을 예금했다!" << endl;
	}

	void Draw(const int d) {
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
	doodle.Deposit(100); // 100원 저축
	doodle.Draw(20); // 20원 인출
	cout << doodle.ViewMoney() << endl; // 280
	return 0;
}