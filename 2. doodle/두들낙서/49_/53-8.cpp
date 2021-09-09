#include <iostream>

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
		int n;
		void set() {
			n = 30;
		}
	}
}

int main() {
	using namespace doodle; // main �Լ� ���� �������� doodle ���� ����
	::set();
	// set(); : ������ doodle ���� �Լ��� �̸��� �����Ƿ� namespace ���� �Ұ�
	doodle::set();
	google::set(); // ��� ���� ���� ȣȣ~~
	std::cout << ::n << std::endl;
	std::cout << doodle::n << std::endl;
	std::cout << doodle::google::n << std::endl;
}