// ������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>
using namespace std;

class Myclass {
public:
	Myclass() { // ������
		cout << "�����ڰ� ȣ��Ǿ���!" << endl;
	}
	~Myclass() { // �Ҹ���
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!" << endl;
	}
};

Myclass globalObj;
void testLocalObj() {
	cout << "testLocalObj �Լ� ����" << endl;
	Myclass localObj;
	cout << "testLocalObj �Լ� ��" << endl;
}

int main() {
	cout << "main�Լ� ����" << endl;
	testLocalObj();
	cout << "main�Լ� ��" << endl;
	return 0;
}

// ���� ���� : ���� �Լ� ���� ���Ŀ� �ٷ� �Ҹ�~

/*
Q. �����ڿ� �Ҹ��ڸ� �� �����ָ�!? A. �������� ȣ���.
default �����ڿ� �Ҹ��� : �⺻������ �����ǰ� ȣ��Ǵ� �ֵ�
Myclass() {

}
~Myclass() {

}
deafult ������, �Ҹ��ڴ� �̷� ������ �ƹ� ���뵵 ����! �׳� �������� �ֵ�!
*/