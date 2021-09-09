#include <iostream>

using namespace std;

class Account {
public:
	// 생성자
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		money += d;
		cout << d << "원을 예금했다!" << endl;
	}

	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!" << endl;
		}
	}

	// const가 앞에 있다면? => 상수형 메소드 아님.
	const int ViewMoney() {
		// money++; // 빨간 줄 안 생김. 왜냐? 상수형 메소드 아니니까.
		return money; // 대신 return 타입 자체가 상수형.
	}

private:
	int money;
};

int main() {
	Account doodle(200);
	doodle.Deposit(100); // 100원 저축
	doodle.Draw(20); // 20원 인출
	cout << doodle.ViewMoney() << endl; // 280
	// doodle.ViewMoney() += 100; // 빨간 줄 생김!
	// 사실 애초에 리턴값이 상수이긴 함.
	// 그래서 메소드 앞에 const 붙여도 별 의미 없음. 그러나 의미 있는 경우가 있다.
	return 0;
}