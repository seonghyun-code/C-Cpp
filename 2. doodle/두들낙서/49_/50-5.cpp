#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	for (int n : arr) {
		cout << n << " ";
		n++; // n�� �ٲ㵵 arr ���� �ٲ��� ����.
	}
	cout << endl;

	for (int& n : arr) {
		cout << n << " ";
		n++; // n�� �ٲ�� arr�� �ٲ�.
	}
	cout << endl;

	for (int n : arr) {
		cout << n << " ";
	}
	return 0;
}