#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �ڱ� �ڽ��� ����ϴ� �ڵ�
/*
feof : ������ ������ ������ true ��ȯ, ���� ���ϸ� false ��ȯ
end of file�� ������ 'v'
file �б� ���� �� !�� �ٿ����ϱ� => false�� ��
*/
// �������� }} : ���� 1 ���������� feof�� false -> ������ �Ŀ� true
// �׷��� �� ���� �� ���� �� �� ���ڰ� �����ϱ� }�� �� �� �� }
int main() {
	FILE* in = fopen("47-3_1.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}
	fclose(in);
	return 0;
}