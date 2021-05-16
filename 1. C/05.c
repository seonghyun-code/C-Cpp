#include <stdio.h>

int main() {
	// 1. int : 32bit(4byte) : 정수를 담는데 쓰임
	int a = 5;
	int b = 3;
  // 더하기
	int hap = a + b;
  printf("%d + %d = %d\n", a, b, hap);
  
  // 빼기
	int cha = a - b;
  printf("%d - %d = %d\n", a, b, cha);
  
  // 곱하기
	int gop = a * b;
  printf("%d * %d = %d\n", a, b, gop);
	
  // 몫
  int mok = a / b;
  printf("%d / %d = %d\n", a, b, mok);
  
  // 나머지
	int nameoji = a % b;
	printf("%d %% %d = %d\n", a, b, nameoji); // % 출력 : %%
	
  // 2. 주석의 신비함..^^ (얘는 그대로 실행시키면 오류난다.)
  printf("%d %d", /*a, */b);
  
  printf(/*"%d %d", a*/, b);
  
  printf(/*"%d %d", a, b);
  printf("%d %d", a, */b);

	// 3. 꿀팁 : ctrl + H 후 alt + A: @@를 $$로 바꾸기

	// 4. float : 32bit(4byte) : 실수를 담는데 쓰임
	float a = 9.8;
	float b = 3.14; // 3.14를 저장할 때 32bit = [+][-2][314] => 용량이 작기 때문에 오차 발생 => double 많이 사용
  
  // 더하기
	float hap = a + b;
  printf("%f + %f = %f\n", a, b, hap);
	
  // 빼기
  float cha = a - b;
  printf("%f - %f = %f\n", a, b, cha);
  
	// 곱하기
  float gop = a * b;
  printf("%f * %f = %f\n", a, b, gop);
  
	// 나누기
  float mok = a / b;
	printf("%f / %f = %f\n", a, b, mok);

  // 5. double : 64bit(8byte) : 실수를 담는데 쓰임
	// 저장 공간이 float 크기의 2배 = 표현 가능한 숫자의 개수는 제곱
	double a = 9.8;
	double b = 3.14;
  
  // 더하기
	double hap = a + b;
  printf("%f + %f = %f\n", a, b, hap);
  
  // 빼기
	double cha = a - b;
  printf("%f - %f = %f\n", a, b, cha);
  
  // 곱하기
	double gop = a * b;
  printf("%f * %f = %f\n", a, b, gop);
  
  // 나누기
	double mok = a / b;
	printf("%f / %f = %f\n", a, b, mok);
	
	// 6. 부동소수점(floating point) : 소수점이 바뀔 수 있다! 3.14 = 314E-2 = 0.314E1 ...
	return 0;
}

/*
10진법(0 ~9) : 123 = 100 + 20 + 3 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 3 * 10 ^ 0
2진법(0, 1) : 110(2) = 1 * 2 ^ 2 + 1 * 2 ^ 1 = 6

int - 32bit : 00000000 00000000 00000000 00000000 (자리가 32개)
ex) 5 = 101(2) : 00000000 00000000 00000000 00000101

byte : 컴퓨터에서 데이터를 처리하는 가장 작은 단위(1byte = 8bit) ... 화학 1몰 = ...

자료형 - 정수형, 실수형
정수형
	char(1byte) : 문자를 담는데 쓰임[문자가 정수형 변수인 이유 : 아마 아스키 코드ㅎㅎㅎ]
	short(2byte)
	long(4byte) : -2147483648 ~2147483647 : 2 ^ 32개의 숫자
	long long(8byte)
	int(시스템에 따라 자동 결정 ... 대체로 long)
실수형
	float(4byte)
	double(8byte)

unsigned, signed : 부호 없는, 부호 있는
	음수 : -1 : 11111111 11111111 11111111 11111111
	ex) unsigned int a; // 부호 없는 int

void : return 값이 없는 함수의 자료형

bool : 참, 거짓을 저장 (1bit만 필요하지만 컴퓨터는 실질적으로 최소 단위인 8bit(1byte)를 사용함! => bool은 8bit를 사용 => 결국 char를 사용하는 것과 같다ㅠ_ㅠ)
*/
