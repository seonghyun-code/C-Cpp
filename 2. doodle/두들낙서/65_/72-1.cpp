#include <iostream>
#include <string>
using namespace std;

class Item {
public: // 주석 한 번에 : ctrl + k + c<-> 해제는 ctrl + k + u
	Item(int num) : num(num) { // 변환 생성자
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
	i3 = 5;
	Item i4 = (Item)4;

	Item i5(5);
	i5 = (string)"stone";

	Item i6(1, "grass");
	Item i7 = { 2, "dirt" };
	i7 = { 12, "desk" };
	Item i8{ 3, "wood" };

	int itemNm = (int)i8; // 허용 x
	// solution : 형변환도 연산자이므로 연산자 오버로딩을 해주면 된 다!
	return 0;
}