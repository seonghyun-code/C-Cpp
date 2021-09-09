#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

// �ĺ��� �˻� : �Լ��� ���� ����� ����� ��� namespace ���� �ִ��� �����Ϸ��� �˻��ϴ� ��
// �׷��� �찥���ٸ� ���� ���� ���콺�� ��¦ ���ٴ뺸��

namespace doodle {
	void set();

	namespace google {
		void set();
		int n;
	}
	int n;
}
// ���⿡ �̷� �Լ�, �̷� ������ �ֱ���~ �� Ȯ��
// ���⿡���� doodle, google �ȿ� n�� �ִ� �� �ƴ� ����

int main() {
	::set();
	doodle::set();
	doodle::google::set();
	cout << ::n << endl; // 10
	cout << doodle::n << endl; // 20
	cout << doodle::google::n << endl; // 30
}

void doodle:: set() {
	n = 20;
}
void doodle::google:: set() {
	n = 30;
}
