#include <iostream>
using namespace std;

// 생성자 : 멤버 변수 초기화 하는데 쓰임
// 소멸자 : 메모리 해제하기 하는데 쓰임

// 복소수를 저장하는 class
class Complex {
public:
	Complex() { // 생성자
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) { // 생성자도 오버로딩 가능
		real = real_;
		imag = imag_;
	}

	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}

	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1; // 0 + 0i
	Complex c2 = Complex(1, 2); // 1 + 2i
	Complex c3(3, 4); // 3 + 4i
	Complex c4 = { 5, 6 }; // 5 + 6i
	Complex c5 = Complex{ 7, 8 }; // 7 + 8i
	Complex c6{ 9, 0 }; // 9 + 0i
	cout << c1.GetReal() << " + " << c1.GetImag() << "i" << endl;
	cout << c2.GetReal() << " + " << c2.GetImag() << "i" << endl;
	cout << c3.GetReal() << " + " << c3.GetImag() << "i" << endl;
	cout << c4.GetReal() << " + " << c4.GetImag() << "i" << endl;
	cout << c5.GetReal() << " + " << c5.GetImag() << "i" << endl;
	cout << c6.GetReal() << " + " << c6.GetImag() << "i" << endl;
	return 0;
}