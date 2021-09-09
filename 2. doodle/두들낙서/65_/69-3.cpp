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
		cout << "String(const String&) : " << this << endl;
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
	a = getName();
	cout << "===== 4 =====" << endl;
	// 임시 객체는 r-value다!
	String&& r = getName(); // r-value 참조자가 임시 객체를 참조 중~~
	return 0;
}