/*
	������(�Ͻ���) ����ȯ : implicit conversion
<-> ����� ����ȯ        : explicit conversion
*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public: // �ּ� �� ���� : ctrl + k + c<-> ������ ctrl + k + u
	Item(int num) : num(num) { // ��ȯ ������ : �ٸ� Ÿ���� �ڽ��� Ÿ������ ��ȯ
		cout << "Item(int)" << endl;
	}
	Item(string name) : name(name) { // ��ȯ ������
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

	i3 = 5; // ������ ��ȯ
	Item i4 = (Item)4; // ����� ��ȯ

	Item i5(5);
	i5 = (string)"stone"; // ����� ��ȯ

	Item i6(1, "grass");
	Item i7 = { 2, "dirt" };
	i7 = { 12, "desk" }; // ������ ��ȯ

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