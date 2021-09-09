#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char* str) 생성자 호출" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, str);
	}

	String(const String& rhs) { // 복사생성자 오버로딩
		/* strData = rhs.strData; // 얕은 복사
		len = rhs.len; // 깊은 복사 */
		cout << "String(String& rhs) 생성자 호출" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData); // 깊은 복사
		len = rhs.len; // 깊은 복사
	}

	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제 : " << (void*)strData << endl;
		strData = NULL;
	}

	char* GetStrData() const {
		return strData;
	}

	int GetLen() const {
		return len;
	}

private:
	char* strData;
	int len;
};

int main() {
	String s1("안녕");
	String s2(s1); // 복사생성자
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	return 0;
}