/*
3. ��� ����� ���纸��.
*/
// &ptr[num] �κ� : �տ� �迭 ���� �κ� �ٽ� ����~~~

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() : num(cnt++), ch('\0') {} // num = cnt �Ŀ� cnt++
	
	void Check(MyClass* ptr) { // ptr = &obj[0] = obj
		if (ptr + num == this) { // ptr + num = &ptr[num] = &obj[num], i = 3�� �� this = &obj[3]
			cout << num << endl;
		}
	}
	static int cnt;

private:
	int num;
	int ch; // ��� �̹� ���������� �ʿ� ����^_^
};
int MyClass::cnt = 0;

int main() {
	MyClass obj[5];
	// MyClass �迭 5ĭ => 5���� ��ü ����
	// obj [num = 0][num = 1][num = 2][num = 3][num = 4] , cnt = 5
	// ch�� �� '\0'�� ����Ǿ����� ��^^

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj); // 0, 1, 2, 3, 4
		// obj = &obj[0]
	}
	cout << "Test #2 : " << endl;
	for (MyClass& i : obj) { // ���� ��� for�� :  0, 1, 2, 3, 4
		i.Check(obj); // i : ������ ��ü�� ����Ű�� reference ����
	}
	cout << "cnt = " << MyClass::cnt << endl; // 5
	return 0;
}