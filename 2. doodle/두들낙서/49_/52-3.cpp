/*
3. 다음 함수 정의에서 컴파일 오류가 나는 이유
*/
// 직사각형 정의 함수

// Q1.
void drawRectangle(int l, int r, int t, int b) {

}

/*
void drawRectangle(int x = 0, int y = 0, int w, int h) {
}
*/
// A. default 매개변수는 오른쪽부터 줘야 함!


// Q2. 여전히 문제가 있음
void drawRectangle(int w, int h, int x = 0, int y = 0) {

}
// A. 매개변수 개수가 같음. 그래서 drawRectangle(0, 0, 0, 0)을 해주면
//    뭘 호출한 건지 알 수 x

int main() {
	drawRectangle(0, 0, 0, 0);
	return 0;
}