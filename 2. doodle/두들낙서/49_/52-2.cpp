#include <iostream>
using namespace std;

/*
2. ���� ��� for���� Ȱ���Ͽ� ������ �迭�� ���
*/

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	/*
	27���� �ڼ��� ����
	ln => 3��¥�� 1���� �迭�� ����Ŵ. arr[0], arr[1]
	
	n�� �� �迭 �ȿ��� ���� ��� for��
	arr_0[0], arr_0[1], arr_0[2], arr_1[0], arr_1[1], arr_1[2]
	ln / col -> [1][2][3]
	            [4][5][6]	
	*/
	
	for (int(&ln)[3] : arr) { // 3��¥�� int�� �迭�� ����Ű�� �ִ� ���۷��� ln
		for (int& n : ln) {
			cout << n << ' ';
		}
		cout << endl;
	}
	cout << endl;

	for (auto &ln : arr) {
		for (auto &n : ln) {
			cout << n << ' ';
		}
		cout << endl;
	}

	return 0;
}