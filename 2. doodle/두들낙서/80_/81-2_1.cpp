// 가상 소멸자

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
	~Bingsoo() {
		cout << "~Bingsoo()" << endl;
		delete ice;
		// delete pat; // 자식 클래스 멤버 변수에는 접근 못하는데.. 어떻게 pat을 소멸해야 할까!?
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
	Pat *pat;
};

int main() {
	Bingsoo* p = new PatBingsoo;


	/* ... */


	delete p; // ~PatBingsoo 소멸자 호출이 안 됨
	// c++ 정적 바인딩 => Bingsoo 소멸자 호출함
	return 0;
}