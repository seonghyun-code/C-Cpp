#include <stdio.h>
// 구조체 포인터
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
	/* 예제 1*/
	productInfo myProduct{ 4897283, "제주 한라봉", 19900 }; // 이렇게도 초기화 가능

	productInfo* ptr_product = &myProduct;
	
	printf("상품 번호 : %d\n", (*ptr_product).num);
	printf("상품 이름 : %s\n", (*ptr_product).name);
	printf("상품 가격 : %d원\n", (*ptr_product).cost);

	// (*a).b == a->b
	printf("상품 번호 : %d\n", ptr_product->num); // (*ptr_product).num
	printf("상품 이름 : %s\n", ptr_product->name);
	printf("상품 가격 : %d원\n\n", ptr_product->cost);

	/* 예제 2*/
	productInfo myProduct2{ 4897283, "제주 한라봉", 20000 };
	printf("상품 가격 : %d원\n", myProduct2.cost);
	productSale(&myProduct2, 10);
	printf("상품 가격 : %d원\n\n", myProduct2.cost);


	/* 예제 3 */
	productInfo otherProduct{ 4897284, "성주 꿀참외", 10000 };
	productSwap(&myProduct, &otherProduct);
	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("상품 가격 : %d원\n", myProduct.cost);
	printf("상품 번호 : %d\n", otherProduct.num);
	printf("상품 이름 : %s\n", otherProduct.name);
	printf("상품 가격 : %d원\n", otherProduct.cost);
	return 0;
}