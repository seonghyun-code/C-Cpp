// A. �̷� �Ǽ��� �����ϱ� ���� �Ű� ������ ���ȭ�� ��Ű��.

#include <iostream>

using namespace std;

class Account {
public:
	// ������
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		// d = money; // ���� ��
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}

	void Draw(const int d) {
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
	doodle.Deposit(100); // 100�� ����
	doodle.Draw(20); // 20�� ����
	cout << doodle.ViewMoney() << endl; // 280
	return 0;
}