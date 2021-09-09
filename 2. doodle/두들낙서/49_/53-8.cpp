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
	using namespace doodle; // main 함수 범위 내에서만 doodle 생략 가능
	::set();
	// set(); : 전역과 doodle 내부 함수의 이름이 같으므로 namespace 생략 불가
	doodle::set();
	google::set(); // 얘는 생략 가능 호호~~
	std::cout << ::n << std::endl;
	std::cout << doodle::n << std::endl;
	std::cout << doodle::google::n << std::endl;
}