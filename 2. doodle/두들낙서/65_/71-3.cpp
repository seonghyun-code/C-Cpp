/*
	묵시적(암시적) 형변환 : implicit conversion
<-> 명시적 형변환        : explicit conversion
*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public: // 주석 한 번에 : ctrl + k + c<-> 해제는 ctrl + k + u
	Item(int num) : num(num) { // 변환 생성자
		cout << "Item(int)" << endl;
	}
	Item(string name) : name(name) {
		cout << "Item(string)" << endl;
	}
	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}
private:
	int num;
	string name;
};

int main() {
	Item i1 = Item(1);
	Item i2(2);
	Item i3 = 3;

	i3 = 5; // 묵시적 변환
	// 5가 들어가면 변환될 수 있네~를 알고 변환생성자를 호출 ... 임시 객체 생성됨
	// 대입 연산자 덕분에 얕은 복사가 이뤄진 후 사라짐.

	Item i4 = (Item)4; // 명시적 변환
	return 0;
}