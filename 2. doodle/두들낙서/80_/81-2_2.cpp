#include <iostream>

using namespace std;

class Ice {
public:
	Ice() { cout << "Ice()" << endl; }
	~Ice() { cout << "~Ice()" << endl; }
};

class Pat {
public:
	Pat() { cout << "Pat()" << endl; }
	~Pat() { cout << "~Pat()" << endl; }
};

class Bingsoo {
public:
	Bingsoo() {
		cout << "Bingsoo()" << endl;
		ice = new Ice;
	}
	virtual ~Bingsoo() { // 가상소멸자 ... 동적 바인딩
		cout << "~Bingsoo()" << endl;
		delete ice;
	}
private:
	Ice* ice;
};

class PatBingsoo : public Bingsoo {
public:
	PatBingsoo() {
		cout << "PatBingsoo()" << endl;
		pat = new Pat;
	}
	~PatBingsoo() {
		cout << "~PatBingsoo()" << endl;
		delete pat;
	}
private:
private:
	Pat* pat;
};

int main() {
	Bingsoo* p = new PatBingsoo; // 빙수 -> 아이스 -> 팥빙수 -> 팥
	delete p; // 팥빙수 -> 팥 -> 빙수 -> 아이스
	return 0;
}

// 소멸자는 웬만하면 가상으로..!!