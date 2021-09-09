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

// namespace 안에서 소속을 밝히지 않았을 경우 => 그 namespace 안에 있는 변수, 함수 호출

int main() {
	::set();
	doodle::set();
	google::set();
	cout << ::n << endl; // 10 -> 90
	cout << doodle::n << endl; // 20 -> 60
	cout << google::n << endl; // 30
	return 0;
}