// 깊은 복사도 나름 단점이 있다.
// 객체 크기가 클수록 복사해야 하는 양이 많아짐.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

	String(const String& rhs) { // 복사 생성자
		cout << "String(const String&) : " << this <<  endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) { // 복사 대입 연산자
		cout << "String& operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}

	char* GetStrData() const {
		return strData;
	}

	int GetLen() const {
		return len;
	}

private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
	}
	void release() {
		delete[] strData;
		if (strData) cout << "strData released  : " << (void*)strData << endl;
	}
	char* strData;
	int len;
};

String getName() {
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}

int main() {
	String a;
	cout << "===== 1 =====" << endl;
	a = getName(); // 이때만 깊은 복사가 한 번 발생할 것 같은데 ... 2번 발생!! 복사 생성자가 왜 호출될까?
	cout << "===== 4 =====" << endl;
	return 0;
}

/*
임시 객체 : 
getName [ res ]
main    [ a   ]
a가 res를 return 받아야 하는데 res는 소멸될 것!!!
=> 임시 객체에 res가 복사가 됨! ... 얘가 살아남아서 a에 복사되는 것.
res -> 임시객체 -> a : 복사 총 2번!!! 근데 굳이 이럴 필요가 ㄴㄴ

  res   임시객체    a
   .       .       .
   .       .       .
strData strData strData // 서로 다른 공간
[     ]>[     ]>[     ]
  (복사생성자) (복사대입연산자)
*/

// 우리의 목표 : 복사생성자랑 복사대입연산자를 없애고 얕은 복사를 할 것!!!!!!
// 얕은 복사의 문제점이 메모리가 두 번 해제된다는 것이었는데 무조건 소멸자는 한 번만 호출되도록!