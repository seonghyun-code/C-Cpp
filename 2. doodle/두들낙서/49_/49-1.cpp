#include <iostream> // input, output°ú °ü·ÃµÈ stream

namespace a {
	int n;
}

namespace b {
	int n;
}

int main() {
	std::cout << "Hello, World! " << 10 << " C++"<< std::endl;
	// µ¥ÀÌÅÍ ºÐ¸® : <<
	// endl : end line (ÁÙ¹Ù²Þ)

	// namespace : ÀÌ¸§ °ø°£ (ex. std)
	// ±è Ã¶¼ö, ¹Ú Ã¶¼ö ... ±è, ¹ÚÀÌ namespace
	a::n = 10;
	b::n = 20;
	std::cout << a::n << " " << b::n << std::endl;
	return 0;
}