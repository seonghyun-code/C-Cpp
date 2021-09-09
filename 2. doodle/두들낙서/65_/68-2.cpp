#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() ������ ȣ��" << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char* str) ������ ȣ��" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, str);
	}

	String(const String& rhs) {
		cout << "String(String& rhs) ������ ȣ��" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
	}

	~String() {
		cout << "~String() �Ҹ��� ȣ��" << endl;
		delete[] strData;
		cout << "strData ���� : " << (void*)strData << endl;
		strData = NULL;
	}

	String &operator=(const String &rhs) { // &�� �ٿ������ν� ���縦 �ٿ��� �� ���� ... ȿ�� ��!
		delete[] strData; // strData�� NULL�� ����? delete[]������ �� �Ǳ� ������ �װ� ���� ����
		cout << "strData ���� : " << (void*)strData << endl;
		strData = new char[rhs.len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
		return *this; // this : �� �Լ��� �ҼӵǾ��ִ� ��ü�� �ּҰ� -> *this : ��ü!
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
	// �����ʺ��� ����!
	// b = a�� �� ��, 5�� return
	// c = 5 ... =�� return ���� ���´�!

	cout << a << b << c << endl;*/

	String s1("�ȳ�");
	String s2(s1);
	String s3;
	String s4("���");
	cout << "���� ������ �����ε�" << endl;
	s3 = s1; // s3.operator=(s1);, ���⼭�� ���� �Ҵ� ����
	s4 = s1;
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
	cout << s4.GetStrData() << endl;
	return 0;
}