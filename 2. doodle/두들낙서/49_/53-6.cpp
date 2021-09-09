#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	void set() {
		n = 20;
	}

	namespace google {
		void set() {
			n = 30;
		}
		int n;
	}
	int n;
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();
	cout << ::n << endl; // 30
	cout << doodle::n << endl; // 0
	cout << doodle::google::n << endl; // 0
}