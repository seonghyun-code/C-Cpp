#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); // 100����
	int* b = new int(3); // 200����

	*a = *b; // 100������ ����Ǿ��ִ� ��(5)�� 3���� �ٲ��.

	cout << *a << *b << endl;

	delete a;
	delete b;
	return 0;
}


//  a = b  ���� ����(������ ����) ... �ּҰ��� �ٲ�
// *a = *b ���� ����(���� ����) ... �� ��ü�� �ٲ�