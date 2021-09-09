#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		void set() {
			n = 30;
		} // �������� google::doodle::n�� �� ���Ա� ������ doodle::n�� ����Ѵٰ� ����
		int n;
	}
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();
	cout << ::n << endl; // 10
	cout << doodle::n << endl; // 30
	cout << doodle::google::n << endl; // 0
}