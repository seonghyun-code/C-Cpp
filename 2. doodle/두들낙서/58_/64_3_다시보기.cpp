/*
3. 출력 결과를 맞춰보기.
*/
// &ptr[num] 부분 : 앞에 배열 설명 부분 다시 보긔~~~

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() : num(cnt++), ch('\0') {} // num = cnt 후에 cnt++
	
	void Check(MyClass* ptr) { // ptr = &obj[0] = obj
		if (ptr + num == this) { // ptr + num = &ptr[num] = &obj[num], i = 3일 때 this = &obj[3]
			cout << num << endl;
		}
	}
	static int cnt;

private:
	int num;
	int ch; // 사실 이번 예제에서는 필요 없음^_^
};
int MyClass::cnt = 0;

int main() {
	MyClass obj[5];
	// MyClass 배열 5칸 => 5개의 객체 생성
	// obj [num = 0][num = 1][num = 2][num = 3][num = 4] , cnt = 5
	// ch는 다 '\0'이 저장되어있을 것^^

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj); // 0, 1, 2, 3, 4
		// obj = &obj[0]
	}
	cout << "Test #2 : " << endl;
	for (MyClass& i : obj) { // 범위 기반 for문 :  0, 1, 2, 3, 4
		i.Check(obj); // i : 각각의 객체를 가리키는 reference 변수
	}
	cout << "cnt = " << MyClass::cnt << endl; // 5
	return 0;
}