#include <iostream>
using namespace std;

int main() {
	int a(10); // ���� �ʱ�ȭ int a = 10;
	
	a = 5; // ����
	// a(5); // �Լ����� �������� �𸣱� ������ �̷��Դ� ���� �Ұ���
	
	int b(a + 10);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}