#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); // 5�� �ּ�(100����) ����
	int* b = new int(3); // 3�� �ּ�(200����) ����

	// a = b; // �ּҰ��� �ٲ� ... 100���� -> 200������
	// 1. ������ ���ϰ� ��뵵 ���ϰ�
	// 2. ������ ������ �� �����Ϸ��� �� ... ��Ÿ�� ����

	delete a;
	delete b; 
	return 0;
}