#include <iostream>
using namespace std;

int main() {
	int a(10); // 변수 초기화 int a = 10;
	
	a = 5; // 대입
	// a(5); // 함수인지 변수인지 모르기 때문에 이렇게는 대입 불가능
	
	int b(a + 10);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}