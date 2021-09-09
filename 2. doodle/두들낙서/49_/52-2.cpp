#include <iostream>
using namespace std;

/*
2. 범위 기반 for문을 활용하여 이차원 배열을 출력
*/

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	/*
	27강에 자세히 나옴
	ln => 3개짜리 1차원 배열을 가리킴. arr[0], arr[1]
	
	n은 그 배열 안에서 범위 기반 for문
	arr_0[0], arr_0[1], arr_0[2], arr_1[0], arr_1[1], arr_1[2]
	ln / col -> [1][2][3]
	            [4][5][6]	
	*/
	
	for (int(&ln)[3] : arr) { // 3개짜리 int형 배열을 가리키고 있는 레퍼런스 ln
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