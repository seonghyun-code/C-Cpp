#include <iostream>
using namespace std;

int inventory[64] = { 0 };
int score = 0;

// default : �ƹ� ���� ���� �� �־��ִ� �⺻ ��
void getItem(int itemId, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}

/*
void getItem2(int itemId, int cnt = 1, int sc = 0, int a) {
	inventory[itemId] += cnt;
	score += sc;
}
// (6, 5)�� ���� �� cnt�� 5����, sc�� 5���� a�� 5���� �� �� ����
// ����, default ���� ������ �����ʺ��� ����!
// �Ʒ��� ���� �����ֱ�!
void getItem2(int itemId, int a, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}
*/

int main() {
	getItem(6, 5); // 6�� ������5��
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	cout << score << endl;
	for (int i = 0; i < 16; i++) {
		cout << inventory[i] << ' ';
	}
	cout << endl;
	return 0;
}