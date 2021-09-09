/*
    ������(�Ͻ���) ����ȯ : implicit conversion
<-> ����� ����ȯ        : explicit conversion
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
	Item i3 = 3; // ��������� ��� ���� ǥ�� & ����� ǥ��

	i3 = 5; // �̰� ��� �����Ѱ�
	
	Item i4 = (Item)4; // ����ȯ
	
	// �����ڰ� 5���� ȣ���!!!
	return 0;
}