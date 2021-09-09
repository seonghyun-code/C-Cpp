#include <iostream>
using namespace std;

int n;
void set();

namespace doodle {
	int n;
	void set();
}

namespace google {
	int n;
	void set();
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

void set() { // void ::set() ���൵ ����
	n = 10;
}

namespace doodle {
	void set() {
		n = 20;
	}
}

void google::set() {
	n = 30;
}