#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	for (int n : arr) {
		cout << n << " ";
		n++; // nÀ» ¹Ù²ãµµ arr °ªÀº ¹Ù²îÁö ¾ÊÀ½.
	}
	cout << endl;

	for (int& n : arr) {
		cout << n << " ";
		n++; // nÀÌ ¹Ù²î¸é arrÀÌ ¹Ù²ñ.
	}
	cout << endl;

	for (int n : arr) {
		cout << n << " ";
	}
	return 0;
}