/*
	묵시적(암시적) 형변환 : implicit conversion
<-> 명시적 형변환        : explicit conversion
*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public: // 주석 한 번에 : ctrl + k + c<-> 해제는 ctrl + k + u
	//Item(int num) : num(num) { // 변환 생성자 ... i4에서처럼 형변환을 해주는 역할도 한다. :)
	//	cout << "Item(int)" << endl;
	//}
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

	i3 = 5;

	Item i4 = (Item)4;
	return 0;
}