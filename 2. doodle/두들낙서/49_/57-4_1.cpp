#include <iostream>
using namespace std;

// ��h ��m ��s�� �����ϴ� class
class Time {
public:
	// 5�� : Time(5);
	// 5�� 5�� : Time(5, 5);
	// 5�ð� 5�� 5�� : Time(5, 5, 5);

	// �ʱ�ȭ ���
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