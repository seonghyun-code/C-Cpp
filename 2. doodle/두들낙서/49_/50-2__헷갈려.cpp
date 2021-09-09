#include <iostream>
using namespace std;

// 범위 기반 for문

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int n : arr) { // arr 안에 있는 모든 n을 본다.
		cout << n << " ";
		n++;
	}
	/*
	int n = arr[6];
	n++한다고 해서 arr의 값이 바뀌지 않으므로 :))
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