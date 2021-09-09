/*
    묵시적(암시적) 형변환 : implicit conversion
<-> 명시적 형변환        : explicit conversion
*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public:
	Item(int num) : num(num) {
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
	Item i3 = 3; // 여기까지는 모두 같은 표현 & 배웠던 표현

	i3 = 5; // 이게 어떻게 가능한가
	
	Item i4 = (Item)4; // 형변환
	
	// 생성자가 5개나 호출됨!!!
	return 0;
}