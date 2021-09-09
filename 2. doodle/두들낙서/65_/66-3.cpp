#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		strData = NULL; // �����Ͱ� �ƹ��͵� ����Ű�� ���� �ʴ�.
		len = 0;
	}
	String(const char* str) { // const char�� ����Ű�� ������ str
		len = strlen(str);
		strData = new char[len + 1]; // null ����(\0) ������ + 1
		strcpy(strData, str); // ���� ����
	}

	~String() {
		delete[] strData;
	}

	char* GetStrData() const {
		return strData;
	} // char�� ����Ű�� �����͸� return

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