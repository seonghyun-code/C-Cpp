#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	// 빈 문자열 생성
	String() {
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}
	// 임의의 문자열 생성
	String(const char* str) {
		cout << "String(const char* str) 생성자 호출" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, str);
	}
	// 복사 생성자
	String(const String& rhs) {
		cout << "String(String& rhs) 생성자 호출" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
	}

	// 소멸자
	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제 : " << (void*)strData << endl;
		strData = NULL;
	}

	// 대입 연산자
	String& operator=(const String& rhs) {
		if (this != &rhs) {
			delete[] strData;
			cout << "strData 해제 : " << (void*)strData << endl;
			strData = new char[rhs.len + 1];
			cout << "strData 할당 : " << (void*)strData << endl;
			strcpy(strData, rhs.strData);
			len = rhs.len;
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
	char* strData; // 문자열을 가리키는 포인터 변수
	int len; // 문자열의 길이
};

int main() {
	String s1("안녕");
	String s2(s1);
	String s3("HELLO");
	cout << "대입 연산자 오버로딩" << endl;
	s3 = s3;
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
	return 0;
}

// 이번 시간 : 의도적으로 얕은 복사를 방지