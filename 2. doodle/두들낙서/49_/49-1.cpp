#include <iostream> // input, output�� ���õ� stream

namespace a {
	int n;
}

namespace b {
	int n;
}

int main() {
	std::cout << "Hello, World! " << 10 << " C++"<< std::endl;
	// ������ �и� : <<
	// endl : end line (�ٹٲ�)

	// namespace : �̸� ���� (ex. std)
	// �� ö��, �� ö�� ... ��, ���� namespace
	a::n = 10;
	b::n = 20;
	std::cout << a::n << " " << b::n << std::endl;
	return 0;
}