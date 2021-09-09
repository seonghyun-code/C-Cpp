#include <stdio.h>
// ¹®ÀÚ¿­ : gets / puts
int main() {
	char str[100];
	/*scanf_s("%s", str, sizeof(str)); // "Hello, World!"
	printf("%s", str); // Hello,*/

	gets_s(str); // call-by-reference, "Hello, World!"
	puts(str); // Hello, World!

	return 0;
}

