#include <stdio.h>

struct productInfo {
	int num; // 4byte
	char name[100]; // 1 * 100 = 100byte
	int cost; // 8byte
};

int main() {
	productInfo myProduct = {4897283, "제주 한라봉", 19900}; // 이런 식으로도 초기화 가능!
	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("상품 가격 : %d원\n", myProduct.cost);
	printf("sizeof(myProduct) : %d\n", sizeof(myProduct));
	printf("%d\n", &myProduct);
	printf("%d\n%d\n%d\n", &myProduct.num, &myProduct.name, &myProduct.cost); // 100, 104, 204 [4][100][4]
	return 0;
}