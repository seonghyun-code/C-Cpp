#include <iostream>
using namespace std;

// 시h 분m 초s를 저장하는 class
class Time {
public:
	// 5초 : Time(5);
	// 5분 5초 : Time(5, 5);
	// 5시간 5분 5초 : Time(5, 5, 5);

	// 초기화 목록
	Time() : h(0), m(0), s(0) {}

	Time(int s_) {
		s = s_;
	}

	Time(int m_, int s_) {
		m = m_;
		s = s_;
	}

	Time(int h_, int m_, int s_) {
		h = h_;
		m = m_;
		s = s_;
	}

private:
	int h, m, s;

};