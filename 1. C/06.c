#include <stdio.h>

int main() {
	// 1. sizeof(x) : x의 크기를 알려줌
	// x : 형 (int, float, ...) or 변수 이름
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	int a; char b; float c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
  
  // 2. 실수를 정수형 변수에 담을 수 없다. (3.14 -> 3)
  //    정수를 실수형 변수에 담을 수 있다.
  a = -3.14; // int
	d = 10; // double
	printf("%d %f", a, d);
  
  // 3. 형변환 : 자료형을 다른 자료형으로 바꾸는 작업
  int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
  
	double avg = sum / 3;
  printf("%f\n", avg); // 정수 / 정수 => 93.000000
  
	avg = (double)sum / 3; // 여기서 sum이 잠시 double이 됨
	printf("%f\n", avg); // 실수 / 정수 => 93.666667
	return 0;
}

// 정수 / 정수 = 정수 (몫)
// 실수 / 실수 = 실수
// 실수 / 정수 = 실수

// 정수 + 정수 = 정수
// 실수 + 실수 = 실수
// 정수 + 실수 = 실수
