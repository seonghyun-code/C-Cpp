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

	String(const String& rhs) {
		cout << "String(String& rhs) 생성자 호출" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
	}

	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제 : " << (void*)strData << endl;
		strData = NULL;
	}

	String &operator=(const String &rhs) { // &를 붙여줌으로써 복사를 줄여줄 수 있음 ... 효율 업!
		delete[] strData; // strData가 NULL일 때는? delete[]연산이 안 되기 때문에 그건 걱정 ㄴㄴ
		cout << "strData 해제 : " << (void*)strData << endl;
		strData = new char[rhs.len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
		return *this; // this : 이 함수가 소속되어있는 객체의 주소값 -> *this : 객체!
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
	/*int a = 5;
	int b;
	int c = b = a; // b = 5, c = 5
	// 오른쪽부터 수행!
	// b = a를 한 후, 5를 return
	// c = 5 ... =도 return 값을 갖는다!

	cout << a << b << c << endl;*/

	String s1("안녕");
	String s2(s1);
	String s3;
	String s4("헬로");
	cout << "대입 연산자 오버로딩" << endl;
	s3 = s1; // s3.operator=(s1);, 여기서는 새로 할당 ㄴㄴ
	s4 = s1;
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
	cout << s4.GetStrData() << endl;
	return 0;
}