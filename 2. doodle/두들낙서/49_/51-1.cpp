#include <iostream>

// 레퍼런스를 그 변수의 별명이라고 생각하면...!? ㅎㅎ 쉬움
// overload : 다중 정의

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) { // 포인터를 가리키는 레퍼런스 변수
	int* tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, *pb = &b;

	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a   : " << a << std::endl;
	std::cout << "b   : " << b << std::endl;

	std::cout << "da  : " << da << std::endl;
	std::cout << "db  : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
	return 0;
}