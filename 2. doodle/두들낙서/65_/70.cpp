#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl; // this : 객체의 주소
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
	String(const String& rhs) { // 복사 생성자 ... 여기에 const가 없었으면 r-value 받을 수 없었을 것(바뀌지 않아야 하니까)
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}
	String(String&& rhs) { // 이동 생성자 ... 참조만 이동시켜주기
		// 임(res)할 때 res는 l-value인데 이게 어떻게 될까...?
		// return res;로 반환될 때 res는 l-value이지만은, r-value로 간주된다는 것. 그래서 얘가 호출
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		// res의 strData는 참조를 끊고, 임시 객체의 참조만 남도록
		// delete[]를 해줘도 참조가 끊겼으므로 strData 할당이 풀리지 않음!
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

	String& operator=(String&& rhs) { // 이동 대입 연산자
		cout << "String& operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this; // String a = b = c;를 위해 해주는 것
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
		cout << "strData allocated : " << (void*)strData << endl; // 문자열 주소
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
	return 0;
}

// 임시객체 : r-value이니까
// r-value를 매개변수로 받는 생성자가 호출!
// 그러면 왜 그전까지는 잘 호출이 됐냐? ... const를 붙이면 r-value도 받을 수 있기 때문에!