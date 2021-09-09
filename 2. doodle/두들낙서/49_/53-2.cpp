#include <iostream>
using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		n = 20; // doodle::n = 20
	}
}

namespace google {
	int n;
	void set() {
		n = 30;// google::n = 30
		::n = 90;
		doodle::n = 60;
	}
}

// namespace �ȿ��� �Ҽ��� ������ �ʾ��� ��� => �� namespace �ȿ� �ִ� ����, �Լ� ȣ��

int main() {
	::set();
	doodle::set();
	google::set();
	cout << ::n << endl; // 10 -> 90
	cout << doodle::n << endl; // 20 -> 60
	cout << google::n << endl; // 30
	return 0;
}