#include <stdio.h>
// ����ü ������
struct productInfo {
	int num; // 4byte
	char name[100]; // 1 * 100 = 100byte
	int cost; // 8byte
};

void productSale(productInfo* p, int percent) {
	{
		p->cost -= p->cost * percent / 100;
	}
}

void productSwap(productInfo* a, productInfo* b) {
	productInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	/* ���� 1*/
	productInfo myProduct{ 4897283, "���� �Ѷ��", 19900 }; // �̷��Ե� �ʱ�ȭ ����

	productInfo* ptr_product = &myProduct;
	
	printf("��ǰ ��ȣ : %d\n", (*ptr_product).num);
	printf("��ǰ �̸� : %s\n", (*ptr_product).name);
	printf("��ǰ ���� : %d��\n", (*ptr_product).cost);

	// (*a).b == a->b
	printf("��ǰ ��ȣ : %d\n", ptr_product->num); // (*ptr_product).num
	printf("��ǰ �̸� : %s\n", ptr_product->name);
	printf("��ǰ ���� : %d��\n\n", ptr_product->cost);

	/* ���� 2*/
	productInfo myProduct2{ 4897283, "���� �Ѷ��", 20000 };
	printf("��ǰ ���� : %d��\n", myProduct2.cost);
	productSale(&myProduct2, 10);
	printf("��ǰ ���� : %d��\n\n", myProduct2.cost);


	/* ���� 3 */
	productInfo otherProduct{ 4897284, "���� ������", 10000 };
	productSwap(&myProduct, &otherProduct);
	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��ǰ ���� : %d��\n", myProduct.cost);
	printf("��ǰ ��ȣ : %d\n", otherProduct.num);
	printf("��ǰ �̸� : %s\n", otherProduct.name);
	printf("��ǰ ���� : %d��\n", otherProduct.cost);
	return 0;
}