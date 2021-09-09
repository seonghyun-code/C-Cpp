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
	// 생성자 : 아이스->빙수->팥->팥빙수
	// 부모 클래스 안 멤버 -> 부모클래스 -> 자식 클래스 안 멤버 -> 자식클래스
	delete p;
	// 소멸자 : 팥빙수->팥->빙수->아이스 (생성자 생성 순서와 거꾸로)
	// ... 파생된 애들을 먼저 삭제해주고 기본적인 걸 지우는 ...
	// 포인터가 있다면 포인터가 가리키는 애 먼저 사라진 후 포인터가 사라져야지!!
	// 포인터 먼저 지우면 걔 어떻게 소멸시키나요 :(
	// ex) 팥빙수 먹을 때 얼음 먼저 넣지만... 팥 먼저 먹죠? :))
	return 0;
}

/*
빙수를 만들기 위해 먼저 얼음이 필요한 듯이
객체를 만들 때 필요한 게 멤버 변수들이 필요하겠죠? 그리고 나서 생성자에서 초기화
그리고 부모 클래스 생성 후 자식 클래스 생성

*/