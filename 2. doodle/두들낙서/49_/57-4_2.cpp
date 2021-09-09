#include <iostream>
using namespace std;

// ��h ��m ��s�� �����ϴ� class
/* ������ ���� : ���� �� ���� ����! */
class Time {
public:
	// �ʱ�ȭ ���
	Time() : h(0), m(0), s(0) {}

	Time(int s_) : Time() {
		s = s_;
	}

	Time(int m_, int s_) : Time(s_) {
		m = m_;
	}

	Time(int h_, int m_, int s_) : Time(m_, s_){
		h = h_;
	}

	int h, m, s; // ���� ��� ������ private�� �־�������.. �̹� ��������������������

};

/*
Time(1, 2, 3);
����
Time(1, 2, 3)
=> Time(2, 3)
=> Time(3)
=> Time()
=> h = 0, m = 0, s = 0
=> s = 3
=> m = 2
=> h = 1
*/

int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1 : " << t1.h << "h " << t1.m << "m " << t1.s << "s" << endl;
	cout << "t2 : " << t2.h << "h " << t2.m << "m " << t2.s << "s" << endl;
	cout << "t3 : " << t3.h << "h " << t3.m << "m " << t3.s << "s" << endl;
	cout << "t4 : " << t4.h << "h " << t4.m << "m " << t4.s << "s" << endl;
	return 0;
}