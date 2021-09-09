#include <iostream>
#include <string>
using namespace std;

class Item {
public: // 주석 한 번에 : ctrl + k + c<-> 해제는 ctrl + k + u
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
		// 얘는 반환 타입을 operator 뒤에 적어준다. :)
		// const : 객체 내용물은 바뀌지 않는다.
		return num;
	}

	void print() {
		cout << num << " : " << name << endl;
	}
private:
	int num;
	string name;
};

int main() {
	Item i7 = { 2, "dirt" };
	Item i8{ 3, "wood" };

	int itemNum1 = (int)i8; // 명시적 형변환
	int itemNum2 = i7; // 묵시적 형변환
	cout << itemNum1 << endl;
	cout << itemNum2 << endl;
	return 0;
}