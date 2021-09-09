#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl; // this : ��ü�� �ּ�
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
	String(const String& rhs) { // ���� ������ ... ���⿡ const�� �������� r-value ���� �� ������ ��(�ٲ��� �ʾƾ� �ϴϱ�)
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}
	String(String&& rhs) { // �̵� ������ ... ������ �̵������ֱ�
		// ��(res)�� �� res�� l-value�ε� �̰� ��� �ɱ�...?
		// return res;�� ��ȯ�� �� res�� l-value��������, r-value�� ���ֵȴٴ� ��. �׷��� �갡 ȣ��
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		// res�� strData�� ������ ����, �ӽ� ��ü�� ������ ������
		// delete[]�� ���൵ ������ �������Ƿ� strData �Ҵ��� Ǯ���� ����!
	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) { // ���� ���� ������
		cout << "String& operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}

	String& operator=(String&& rhs) { // �̵� ���� ������
		cout << "String& operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this; // String a = b = c;�� ���� ���ִ� ��
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
		cout << "strData allocated : " << (void*)strData << endl; // ���ڿ� �ּ�
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

// �ӽð�ü : r-value�̴ϱ�
// r-value�� �Ű������� �޴� �����ڰ� ȣ��!
// �׷��� �� ���������� �� ȣ���� �Ƴ�? ... const�� ���̸� r-value�� ���� �� �ֱ� ������!