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
		// ��� ��ȯ Ÿ���� operator �ڿ� �����ش�. :)
		// const : ��ü ���빰�� �ٲ��� �ʴ´�.
		return num;
	}

	void print() {
		cout << num << " : " << name << endl;
	}
private:
	int num;
	string name;
};

int main() {
	Item i7 = { 2, "dirt" };
	Item i8{ 3, "wood" };

	int itemNum1 = (int)i8; // ����� ����ȯ
	int itemNum2 = i7; // ������ ����ȯ
	cout << itemNum1 << endl;
	cout << itemNum2 << endl;
	return 0;
}