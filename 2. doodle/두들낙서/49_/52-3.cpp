/*
3. ���� �Լ� ���ǿ��� ������ ������ ���� ����
*/
// ���簢�� ���� �Լ�

// Q1.
void drawRectangle(int l, int r, int t, int b) {

}

/*
void drawRectangle(int x = 0, int y = 0, int w, int h) {
}
*/
// A. default �Ű������� �����ʺ��� ��� ��!


// Q2. ������ ������ ����
void drawRectangle(int w, int h, int x = 0, int y = 0) {

}
// A. �Ű����� ������ ����. �׷��� drawRectangle(0, 0, 0, 0)�� ���ָ�
//    �� ȣ���� ���� �� �� x

int main() {
	drawRectangle(0, 0, 0, 0);
	return 0;
}