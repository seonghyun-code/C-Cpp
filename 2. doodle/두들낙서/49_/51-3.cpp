#include <iostream>
using namespace std;

int inventory[64] = { 0 };
int score = 0;

// default : 아무 말이 없을 때 넣어주는 기본 값
void getItem(int itemId, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}

/*
void getItem2(int itemId, int cnt = 1, int sc = 0, int a) {
	inventory[itemId] += cnt;
	score += sc;
}
// (6, 5)를 줬을 때 cnt가 5인지, sc가 5인지 a가 5인지 알 수 없음
// 따라서, default 값은 무조건 오른쪽부터 시작!
// 아래와 같이 고쳐주기!
void getItem2(int itemId, int a, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}
*/

int main() {
	getItem(6, 5); // 6번 아이템5개
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