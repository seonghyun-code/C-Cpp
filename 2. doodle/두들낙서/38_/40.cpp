#include <stdio.h>

struct productInfo {
	int num; // 4byte
	char name[100]; // 1 * 100 = 100byte
	int cost; // 8byte
};

int main() {
	productInfo myProduct = {4897283, "���� �Ѷ��", 19900}; // �̷� �����ε� �ʱ�ȭ ����!
	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��ǰ ���� : %d��\n", myProduct.cost);
	printf("sizeof(myProduct) : %d\n", sizeof(myProduct));
	printf("%d\n", &myProduct);
	printf("%d\n%d\n%d\n", &myProduct.num, &myProduct.name, &myProduct.cost); // 100, 104, 204 [4][100][4]
	return 0;
}