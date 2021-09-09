// 배열을 동적할당 하는 경우가 많음.
// 어레이에 들어갈 수 있는 값이 1개일 수도 있고, 1000개일 수도 있을 때
// 정적할당 : int arr[1000]; ... 공간의 낭비가 심함.
// 1칸을 쓸 때는 1칸만, 1000칸을 쓸 때는 1000칸만!

// 즉, array : 사용하고 싶은 길이 만큼 할당 가능

#include <iostream>

using namespace std;

int main() {
	int* arr; // arr = arr + 0 = &arr[0] ... 배열의 0번째 칸을 가리키는 포인터
	int len;

	cout << "동적할당할 배열 길이 입력 : ";
	cin >> len;

	arr = new int[len]; // int형의 배열을 len만큼의 길이로 만드는데, 이 배열의 0번째 주소 값을 arr에 반환하라.

	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	// ****** 완전 주의 ******
	// delete arr; // arr = &arr[0]이므로 0번째 칸만 사라짐!!!!!! 따라서
	delete[] arr; // 배열을 해제하는 거구나!!
	return 0;
}