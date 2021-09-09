#include <iostream>
#include <string>
using namespace std;

class Item {
public:
	Item(int num) : num(num) { // 변환 생성자
		cout << "Item(int)" << endl;
	}
	Item(string name) : name(name) { // 변환 생성자
		cout << "Item(string)" << endl;
	}
	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	// int로의 형변환 연산자 오버로딩
	operator int() const {
		return num;
	}
	// string으로의 형변환 연산자 오버로딩
	operator string() const {
		return to_string(num) + " : " + name; // to_string : <string>에 들어 있음!! 숫자를 string으로 바꿔줌.
	}

	void print() {
		cout << num << " : " << name << endl;
	}
private:
	int num;
	string name;
};

void println(string s) {
	cout << s << endl;
}

void println(int n) {
	cout << n << endl;
}

int main() {
	Item i7 = { 2, "dirt" };
	Item i8{ 3, "wood" };

	println((string)i8);
	println(i7); // i7이 string으로도, int로도 변환이 가능하기 때문에 오류 ... 명시적으로 형변환 해줘야 한다!
	return 0;
}