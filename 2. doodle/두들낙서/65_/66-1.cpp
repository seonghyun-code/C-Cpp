#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); // 5의 주소(100번지) 저장
	int* b = new int(3); // 3의 주소(200번지) 저장

	// a = b; // 주소값이 바뀜 ... 100번지 -> 200번지로
	// 1. 해제도 못하고 사용도 못하고
	// 2. 해제된 공간을 또 해제하려고 함 ... 런타임 에러

	delete a;
	delete b; 
	return 0;
}