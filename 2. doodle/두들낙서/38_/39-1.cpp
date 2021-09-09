#include <stdio.h>
// 구조체 : 여러개의 변수를 하나로 묶어버리는 것!
int main() {
	/* 예제 1 */
	typedef struct {
		int x, y;
	} Point;

	Point p;
	p.x = 3;
	p.y = 4;
	printf("(%d, %d)\n", p.x, p.y);

	/* 예제 2 */
	// typedef int Int32;
	// Int32 n = 2; == int n = 2;와 마찬가지로
	struct { int x, y; } q;
	q.x = 3;
	q.y = 4;
	printf("(%d, %d)\n", q.x, q.y);

	/* 예제 3 */
	struct Point2 {
		int x, y;
	};

	Point2 r;
	r.x = 3;
	r.y = 4;
	printf("(%d, %d)\n", r.x, r.y);
	return 0;
}