#include <iostream>
using namespace std;

// ���� ��� for��

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int n : arr) { // arr �ȿ� �ִ� ��� n�� ����.
		cout << n << " ";
		n++;
	}
	/*
	int n = arr[6];
	n++�Ѵٰ� �ؼ� arr�� ���� �ٲ��� �����Ƿ� :))
	*/
	cout << endl;

	for (int n : arr) {
		cout << n << " ";
	}
	cout << endl;

	for (int &n : arr) {
		cout << n << " ";
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << " ";
	}
	return 0;
}