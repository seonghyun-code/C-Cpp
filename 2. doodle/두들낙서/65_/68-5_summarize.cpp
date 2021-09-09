#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	// �� ���ڿ� ����
	String() {
		cout << "String() ������ ȣ��" << endl;
		strData = NULL;
		len = 0;
	}
	// ������ ���ڿ� ����
	String(const char* str) {
		cout << "String(const char* str) ������ ȣ��" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, str);
	}
	// ���� ������
	String(const String& rhs) {
		cout << "String(String& rhs) ������ ȣ��" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len;
	}

	// �Ҹ���
	~String() {
		cout << "~String() �Ҹ��� ȣ��" << endl;
		delete[] strData;
		cout << "strData ���� : " << (void*)strData << endl;
		strData = NULL;
	}

	// ���� ������
	String& operator=(const String& rhs) {
		if (this != &rhs) {
			delete[] strData;
			cout << "strData ���� : " << (void*)strData << endl;
			strData = new char[rhs.len + 1];
			cout << "strData �Ҵ� : " << (void*)strData << endl;
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
	char* strData; // ���ڿ��� ����Ű�� ������ ����
	int len; // ���ڿ��� ����
};

int main() {
	String s1("�ȳ�");
	String s2(s1);
	String s3("HELLO");
	cout << "���� ������ �����ε�" << endl;
	s3 = s3;
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
	return 0;
}

// �̹� �ð� : �ǵ������� ���� ���縦 ����