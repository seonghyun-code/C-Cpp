// ���� �Ҹ���

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
		// delete pat; // �ڽ� Ŭ���� ��� �������� ���� ���ϴµ�.. ��� pat�� �Ҹ��ؾ� �ұ�!?
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


	delete p; // ~PatBingsoo �Ҹ��� ȣ���� �� ��
	// c++ ���� ���ε� => Bingsoo �Ҹ��� ȣ����
	return 0;
}