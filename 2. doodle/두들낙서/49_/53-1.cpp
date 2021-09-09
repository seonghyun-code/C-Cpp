#include <iostream>
using namespace std;

// namespace

// namespace에 속해있지 x => 전역
int n;
void set() {
	::n = 10; // :: - 전역 변수인 걸 보여주는...
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