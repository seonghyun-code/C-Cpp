#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

// 식별자 검색 : 함수나 변수 등등의 대상이 어느 namespace 내에 있는지 컴파일러가 검사하는 것
// 그래도 헤갈린다면 변수 위에 마우스를 살짝 갖다대보기

namespace doodle {
	void set();

	namespace google {
		void set();
		int n;
	}
	int n;
}
// 여기에 이런 함수, 이런 변수가 있구나~ 를 확인
// 여기에서는 doodle, google 안에 n이 있는 걸 아는 상태

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
