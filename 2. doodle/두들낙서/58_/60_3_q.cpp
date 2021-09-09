#include <iostream>

using namespace std;

class Account {
public:
	// ������
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		d = money; // Q. ���� �̷��� �Ǽ��� �ߴٸ�?
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}

	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�!" << endl;
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
	doodle.Deposit(100); // 100�� �����ؾ� �ϴµ�.. 200
	doodle.Draw(20); // 20�� ����
	cout << doodle.ViewMoney() << endl; // 280�� ���;� �ϴµ�.. 380
	return 0;
}