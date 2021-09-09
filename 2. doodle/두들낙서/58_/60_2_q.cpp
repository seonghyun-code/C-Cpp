/* ����� �Ű������� �޼ҵ� */
// const
// 1. �Ű������� ���ȭ (��� �Լ�)
// 2. �޼ҵ��� ���ȭ (Ŭ������ ��� �޼ҵ�)

#include <iostream>

using namespace std;

class Account {
public:
	// ������
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}

	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�!" << endl;
		}
	}

	int ViewMoney() {
		money++; // �Ϻη�... ���� �̷��� �� �� => Q. ��� �̷� �Ǽ��� ������ �� ������?
		return money;
	}

private:
	int money;
};

int main() {
	Account doodle(100);
	doodle.Deposit(100); // 100�� ����
	doodle.Draw(20); // 20�� ����
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	cout << doodle.ViewMoney() << endl;
	return 0;
}