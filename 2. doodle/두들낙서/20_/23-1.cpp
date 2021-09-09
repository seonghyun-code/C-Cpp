#include <stdio.h>
// 문자열 : 문자들이 열거
int main() {
	char arr[100] = { 'H', 'e', 'l', 'l', 'o'};
	char arr2[] = { 'H', 'e', 'l', 'l', 'o' };
	char arr3[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // null문자!
	char arr4[100] = "Hello";
	char arr5[] = "Hello";

	printf("%s : %d\n", arr, sizeof(arr));
	printf("%s : %d\n", arr2, sizeof(arr2));
	printf("%s : %d\n", arr3, sizeof(arr3));
	printf("%s : %d\n", arr4, sizeof(arr4));
	printf("%s : %d\n", arr5, sizeof(arr5));

	char str[100];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);

	return 0;
}