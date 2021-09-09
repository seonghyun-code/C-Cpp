// ������ ����ȯ�� ���ƹ����� ��� : �����(explicit)

#include <iostream>
#include <string>
using namespace std;

class Item {
public:
	explicit Item(int num) : num(num) { // ��ȯ ������
		cout << "Item(int)" << endl;
	}
	explicit Item(string name) : name(name) { // ��ȯ ������
		cout << "Item(string)" << endl;
	}
	explicit Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	// int���� ����ȯ ������ �����ε� (�����)
	explicit operator int() const {
		return num;
	}
	// string������ ����ȯ ������ �����ε� (�����)
	explicit operator string() const {
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

void println(int n) {
	cout << n << endl;
}

int main() {
	Item i1 = Item(1); // �����	��ȯ
	Item i2(2); // ����� ��ȯ
	Item i3 = 3; // ������ ��ȯ ... ����
	i3 = 5; // ������ ��ȯ ... ����

	return 0;
}