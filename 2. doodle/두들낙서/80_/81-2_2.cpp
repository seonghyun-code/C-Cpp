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
	virtual ~Bingsoo() { // ����Ҹ��� ... ���� ���ε�
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
	Bingsoo* p = new PatBingsoo; // ���� -> ���̽� -> �Ϻ��� -> ��
	delete p; // �Ϻ��� -> �� -> ���� -> ���̽�
	return 0;
}

// �Ҹ��ڴ� �����ϸ� ��������..!!