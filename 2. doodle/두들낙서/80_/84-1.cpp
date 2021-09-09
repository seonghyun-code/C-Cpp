// static_cast  : ����(������ Ÿ�ӿ�)
// dynamic_cast : ����(��Ÿ�� Ÿ�ӿ�)

#include <iostream>

using namespace std;

class Base {
public:
	int x;
};

class Derived : public Base {
public:
	int y;
};

int main() {
	Base* b = new Derived;
	// ���� b�� � ��ü�� ����Ű�� �ִ��� �𸣴� ��Ȳ�̶��?
	Derived* d = static_cast<Derived*>(b);
	delete d;
	delete b;
	return 0;
}

// RTTI(Run Time Type Information/Identification)
/* b�� ����Ű�� �ִ� ��ü�� ����ó�� Base�� �ƴ� ���� ����.
[��Ÿ��]�� b�� ����Ű�� �ִ� ��ü�� ���� Ÿ���� �� �� �ְԲ� ���ִ� ���
*/