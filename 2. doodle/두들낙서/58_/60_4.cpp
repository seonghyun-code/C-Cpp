#include <iostream>

using namespace std;

class Account {
public:
	// ������
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}

	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�!" << endl;
		}
	}

	// const�� �տ� �ִٸ�? => ����� �޼ҵ� �ƴ�.
	const int ViewMoney() {
		// money++; // ���� �� �� ����. �ֳ�? ����� �޼ҵ� �ƴϴϱ�.
		return money; // ��� return Ÿ�� ��ü�� �����.
	}

private:
	int money;
};

int main() {
	Account doodle(200);
	doodle.Deposit(100); // 100�� ����
	doodle.Draw(20); // 20�� ����
	cout << doodle.ViewMoney() << endl; // 280
	// doodle.ViewMoney() += 100; // ���� �� ����!
	// ��� ���ʿ� ���ϰ��� ����̱� ��.
	// �׷��� �޼ҵ� �տ� const �ٿ��� �� �ǹ� ����. �׷��� �ǹ� �ִ� ��찡 �ִ�.
	return 0;
}