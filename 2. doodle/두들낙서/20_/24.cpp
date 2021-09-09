#include <stdio.h>
// 포인터 (pointer) : (변수의 주소를 저장하는) 변수
// point : 가리키다
//   a[20]
// ptr[a의 주소]
int main() {
	// 예제1
	int a = 20; // 변수 선언
	char c = 'h';

	int* ptr_a; // 포인터 변수 선언
	char* ptr_c;

	ptr_a = &a; // &(변수) : 변수의 주소값
	ptr_c = &c; // 포인터에는 (주소)를 저장

	printf("a : %d\n", a);
	printf("a의 주소 : %d\n", &a);

	printf("ptr_a에 저장된 값 : %d\n", ptr_a); // a의 주소
	printf("ptr_a가 가리키는 변수에 저장된 값 : %d\n\n", *ptr_a); // a에 저장된 값
	

	printf("c : %c\n", c);
	printf("c의 주소 : %d\n", &c);
	
	printf("ptr_c에 저장된 값 : %d\n", ptr_c);
	printf("ptr_c가 가리키는 변수에 저장된 값 : %c\n\n", *ptr_c);
	
	// 예제2
	int b = 10;
	int* ptr;
	ptr = &a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
	ptr = &b;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n\n", *ptr);

	// 예제3
	ptr = &a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
	*ptr = 10;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
	printf("a의 값 : %d\n\n", a);

	// 예제4
	int** ptr_ptr; // 포인터를 가리키는 포인터
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