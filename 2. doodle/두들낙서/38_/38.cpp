#include <stdio.h>

// typedef : type define �� ����

int main() {
	// ���� 1
	typedef int Int32;
	Int32 n = 20; // int n = 20;
	printf("%d\n", n);
	printf("%d\n\n", sizeof(Int32)); // 4 * 8 = 32bit

	// ����2
	int point[2] = { 3, 4 };
	printf("(%d, %d)\n", point[0], point[1]);

	typedef int Pair[2];
	Pair point2 = { 3, 4 }; // int point2[2] = { 3, 4 };
	printf("(%d, %d)\n\n", point2[0], point2[1]);

	// ����3
	const char* name = "Doodle";
	printf("�̸� : %s\n", name);

	typedef const char* String;
	String name2 = "Doodle"; // char* name2 = "Doodle";
	printf("�̸� : %s\n", name2);

	return 0;
}