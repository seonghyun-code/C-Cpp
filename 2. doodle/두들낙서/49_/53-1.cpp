#include <iostream>
using namespace std;

// namespace

// namespace�� �������� x => ����
int n;
void set() {
	::n = 10; // :: - ���� ������ �� �����ִ�...
}

namespace doodle {
	int n;
	void set() {
		doodle::n = 20;
	}
}

namespace google {
	int n;
	void set() {
		google::n = 30;
	}
}

int main() {
	::set();
	doodle::set();
	google::set();
	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;
	return 0;
}