/*
	묵시적(암시적) 형변환 : implicit conversion
<-> 명시적 형변환        : explicit conversion
*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public: // 주석 한 번에 : ctrl + k + c<-> 해제는 ctrl + k + u
	Item(int num) : num(num) { // 변환 생성자 : 다른 타입을 자신의 타입으로 변환
		cout << "Item(int)" << endl;
	}
	Item(string name) : name(name) { // 변환 생성자
		cout << "Item(string)" << endl;
	}
	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	void print() {
		cout << num << " : " << name << endl;
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
	Item i4 = (Item)4; // 명시적 변환

	Item i5(5);
	i5 = (string)"stone"; // 명시적 변환

	Item i6(1, "grass");
	Item i7 = { 2, "dirt" };
	i7 = { 12, "desk" }; // 묵시적 변환

	Item i8{ 3, "wood" };

	i1.print();
	i2.print();
	i3.print();
	i4.print();
	i5.print();
	i6.print();
	i7.print();
	i8.print();
	return 0;
}