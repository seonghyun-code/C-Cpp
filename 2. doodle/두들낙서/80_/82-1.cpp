// ����ȯ ... ��ĳ���� Upcasting (�ڽ�Ŭ���� ������ -> �θ�Ŭ���� �����ͷ� ������)

#include <iostream>

using namespace std;

int main() {
	double a = 1; // int�� �ڷ��� 1�� ���������� double������ ����ȯ

	Derived* d = new Derived;
	Base* b = d; // �ڽ�Ŭ�����κ��� �θ�Ŭ������ ������ ����ȯ

	return 0;
}