#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		strData = NULL; // 포인터가 아무것도 가리키고 있지 않다.
		len = 0;
	}
	String(const char* str) { // const char를 가리키는 포인터 str
		len = strlen(str);
		strData = new char[len + 1]; // null 문자(\0) 때문에 + 1
		strcpy(strData, str); // 깊은 복사
	}

	~String() {
		delete[] strData;
	}

	char* GetStrData() const {
		return strData;
	} // char를 가리키는 포인터를 return

	int GetLen() const{
		return len;
	}

private:
	char* strData;
	int len;
};

int main() {
	String s;
	return 0;
}