#include <iostream>
#include <string>
/*
1. �̸��� ������ �ް�, ������ ���� ��µǴ� ���α׷� �ۼ�

�̸� �Է� : �ε鳫��
���� �Է� : 80
�ε鳫������ ������ 80���Դϴ�.
*/
int main() {
	std::string name;
	int score;
	std::cout << "�̸� �Է� : ";
	std::cin >> name;
	std::cout << "���� �Է� : ";
	std::cin >> score;
	std::cout << name << "���� ������ " << score << "���Դϴ�." << std::endl;
	return 0;
}