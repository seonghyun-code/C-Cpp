#include <iostream>
#include <string>
using namespace std;

class Item {
public: // �ּ� �� ���� : ctrl + k + c<-> ������ ctrl + k + u
	Item(int num) : num(num) { // ��ȯ ������
		cout << "Item(int)" << endl;
	}
	Item(string name) : name(name) { // ��ȯ ������
		cout << "Item(string)" << endl;
	}
	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	// int���� ����ȯ ������ �����ε�
	operator int() const {
		return num;
	}
	// string������ ����ȯ ������ �����ε�
	operator string() const {
		return to_string(num) + " : " + name; // to_string : <string>�� ��� ����!! ���ڸ� string���� �ٲ���.
	}

	void print() {
		cout << num << " : " << name << endl;
	}
private:
	int num;
	string name;
};

void println(string s) {
	cout << s << endl;
}

int main() {
	Item i7 = { 2, "dirt" };
	Item i8{ 3, "wood" };

	println((string)i8); // ����� ����ȯ
	println(i7); // ������ ����ȯ
	return 0;
}