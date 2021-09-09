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
		// strData�� ���� ���°� ���Ƽ� ���ڿ�����, ���������� �� ... -> Void�� ����ȯ
		// NULL�� ��� ������ �� ����
		// (void*) : �ּҰ��� ���� ����, �ڷ����� ���� ������ x ... ����� ���� �ٲ� ���� x
		// ���ڿ��� �νĵǴ� �� ����
		// void* ptr = strData; // strData�� �ּҰ��� �����ϴ� ������ ... ��, �� �����Ͱ� �� ����Ʈ����, � ������ ��� �ִ����� �� �� x
		// *ptr = "HELLO"; // ���� �ٷ� ������
		strcpy(strData, str);
	}

	~String() {
		cout << "~String() �Ҹ��� ȣ��" << endl;
		delete[] strData;
		cout << "strData ���� : " << (void*)strData << endl;
		strData = NULL; // ������ �޸𸮿� �ƿ� ������ ���� ����!
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
	String s1("�ȳ�");
	String s2(s1); // s2 = s1�� ���� �ǹ�, ���������
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	return 0;
}

// ��Ÿ�� ���� ... s2 ��ü�� strData�� ����Ű�� ������ �Ҵ��� �� ��.
// ���� ���簡 �Ǿ�����..!