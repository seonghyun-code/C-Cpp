#include <stdio.h>
// sscanf, sprintf
int main() {
	char str[] = "450";
	int n;
	sscanf_s(str, "%d", &n); // n = 450
	printf("n : %d\n", n);

	n = 300;
	char str2[100];
	sprintf_s(str2, "%d", n); // str = "300"
	printf("s : %s\n", str2);
	return 0;
}