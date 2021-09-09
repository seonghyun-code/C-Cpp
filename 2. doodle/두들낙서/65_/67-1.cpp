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
		// strData로 쓰면 형태가 같아서 문자열인지, 포인터인지 모름 ... -> Void로 형변환
		// NULL일 경우 에러가 날 수도
		// (void*) : 주소값만 갖고 있지, 자료형에 관한 정보는 x ... 저장된 값을 바꿀 수는 x
		// 문자열로 인식되는 것 방지
		// void* ptr = strData; // strData의 주소값을 저장하는 포인터 ... 단, 그 포인터가 몇 바이트인지, 어떤 정보를 담고 있는지를 알 수 x
		// *ptr = "HELLO"; // 빨간 줄로 에러남
		strcpy(strData, str);
	}

	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제 : " << (void*)strData << endl;
		strData = NULL; // 해제된 메모리에 아예 접근을 막기 위해!
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
	String s2(s1); // s2 = s1과 같은 의미, 복사생성자
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	return 0;
}

// 런타임 에러 ... s2 객체에 strData가 가리키는 공간이 할당이 안 됨.
// 얕은 복사가 되었구나..!