#include <iostream>
using namespace std;

class Complex {
public:
	Complex(double real_ = 0, double imag_ = 0) {
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
	Complex c0; // 0 + 0i
	Complex c1 = Complex(); // 0 + 0i
	Complex c2 = Complex(1, 2); // 1 + 2i
	Complex c3 = Complex(3); // 3 + 0i
	cout << c0.GetReal() << " + " << c0.GetImag() << "i" << endl;
	cout << c1.GetReal() << " + " << c1.GetImag() << "i" << endl;
	cout << c2.GetReal() << " + " << c2.GetImag() << "i" << endl;
	cout << c3.GetReal() << " + " << c3.GetImag() << "i" << endl;
	return 0;
}