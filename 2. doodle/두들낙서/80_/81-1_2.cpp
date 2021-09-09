#include <iostream>

using namespace std;

class Ice { // ����
public:
	Ice() { cout << "Ice()" << endl; }
	~Ice() { cout << "~Ice()" << endl; }
};

class Pat { // ��
public:
	Pat() { cout << "Pat()" << endl; }
	~Pat() { cout << "~Pat()" << endl; }
};

class Bingsoo { // ����
public:
	Bingsoo() { 
		cout << "Bingsoo()" << endl;
		ice = new Ice; // Ice ������ ȣ���
	}
	~Bingsoo() { 
		cout << "~Bingsoo()" << endl;
		delete ice;
	}
private:
	Ice* ice; // ��� Ice�� ����Ű�� �������� �� ��ü�� ���� x
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

// ���� -> ���̽� -> �� -> �Ϻ���
// �Ϻ��� -> �� -> ���� -> ���̽� (�����Ͱ� ����Ű�� �� �Ҹ��� �� ������ �Ҹ�)