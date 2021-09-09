#include <stdio.h>
// ������ (pointer) : (������ �ּҸ� �����ϴ�) ����
// point : ����Ű��
//   a[20]
// ptr[a�� �ּ�]
int main() {
	// ����1
	int a = 20; // ���� ����
	char c = 'h';

	int* ptr_a; // ������ ���� ����
	char* ptr_c;

	ptr_a = &a; // &(����) : ������ �ּҰ�
	ptr_c = &c; // �����Ϳ��� (�ּ�)�� ����

	printf("a : %d\n", a);
	printf("a�� �ּ� : %d\n", &a);

	printf("ptr_a�� ����� �� : %d\n", ptr_a); // a�� �ּ�
	printf("ptr_a�� ����Ű�� ������ ����� �� : %d\n\n", *ptr_a); // a�� ����� ��
	

	printf("c : %c\n", c);
	printf("c�� �ּ� : %d\n", &c);
	
	printf("ptr_c�� ����� �� : %d\n", ptr_c);
	printf("ptr_c�� ����Ű�� ������ ����� �� : %c\n\n", *ptr_c);
	
	// ����2
	int b = 10;
	int* ptr;
	ptr = &a;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
	ptr = &b;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n\n", *ptr);

	// ����3
	ptr = &a;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
	*ptr = 10;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
	printf("a�� �� : %d\n\n", a);

	// ����4
	int** ptr_ptr; // �����͸� ����Ű�� ������
	ptr_ptr = &ptr;
	// ptr_ptr => ptr => a
	printf("a = %d\n", a);
	printf("&a = %d\n\n", &a);
	
	printf("*ptr = %d\n", *ptr);
	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n\n", &ptr);

	printf("*ptr_ptr = %d\n", *ptr_ptr);
	printf("**ptr_ptr = %d\n", **ptr_ptr); // **ptr_ptr = *(*ptr_ptr) = *(ptr) = a = 10
	printf("ptr_ptr = %d\n", ptr_ptr);
	printf("&ptr_ptr = %d\n\n", &ptr_ptr);

	return 0;
}