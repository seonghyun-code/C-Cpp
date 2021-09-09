#include <iostream>

using namespace std;

class Ice { // 얼음
public:
	Ice() { cout << "Ice()" << endl; }
	~Ice() { cout << "~Ice()" << endl; }
};

class Pat { // 팥
public:
	Pat() { cout << "Pat()" << endl; }
	~Pat() { cout << "~Pat()" << endl; }
};

class Bingsoo { // 빙수
public:
	Bingsoo() { 
		cout << "Bingsoo()" << endl;
		ice = new Ice; // Ice 생성자 호출됨
	}
	~Bingsoo() { 
		cout << "~Bingsoo()" << endl;
		delete ice;
	}
private:
	Ice* ice; // 얘는 Ice를 가리키는 포인터일 뿐 객체는 생성 x
};

class PatBingsoo : public Bingsoo {
public:
	PatBingsoo() { cout << "PatBingsoo()" << endl; }
	~PatBingsoo() { cout << "~PatBingsoo()" << endl; }
private:
private:
	Pat pat;
};

int main() {
	PatBingsoo* p = new PatBingsoo;
	delete p;
	return 0;
}

// 빙수 -> 아이스 -> 팥 -> 팥빙수
// 팥빙수 -> 팥 -> 빙수 -> 아이스 (포인터가 가리키는 애 소멸한 뒤 포인터 소멸)