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
	Bingsoo() { cout << "Bingsoo()" << endl; }
	~Bingsoo() { cout << "~Bingsoo()" << endl; }
private:
	Ice ice;
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
	// ������ : ���̽�->����->��->�Ϻ���
	// �θ� Ŭ���� �� ��� -> �θ�Ŭ���� -> �ڽ� Ŭ���� �� ��� -> �ڽ�Ŭ����
	delete p;
	// �Ҹ��� : �Ϻ���->��->����->���̽� (������ ���� ������ �Ųٷ�)
	// ... �Ļ��� �ֵ��� ���� �������ְ� �⺻���� �� ����� ...
	// �����Ͱ� �ִٸ� �����Ͱ� ����Ű�� �� ���� ����� �� �����Ͱ� ���������!!
	// ������ ���� ����� �� ��� �Ҹ��Ű���� :(
	// ex) �Ϻ��� ���� �� ���� ���� ������... �� ���� ����? :))
	return 0;
}

/*
������ ����� ���� ���� ������ �ʿ��� ����
��ü�� ���� �� �ʿ��� �� ��� �������� �ʿ��ϰ���? �׸��� ���� �����ڿ��� �ʱ�ȭ
�׸��� �θ� Ŭ���� ���� �� �ڽ� Ŭ���� ����

*/