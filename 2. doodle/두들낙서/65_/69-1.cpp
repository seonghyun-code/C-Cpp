// ���� ���絵 ���� ������ �ִ�.
// ��ü ũ�Ⱑ Ŭ���� �����ؾ� �ϴ� ���� ������.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

	String(const String& rhs) { // ���� ������
		cout << "String(const String&) : " << this <<  endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
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

	char* GetStrData() const {
		return strData;
	}

	int GetLen() const {
		return len;
	}

private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
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
	a = getName(); // �̶��� ���� ���簡 �� �� �߻��� �� ������ ... 2�� �߻�!! ���� �����ڰ� �� ȣ��ɱ�?
	cout << "===== 4 =====" << endl;
	return 0;
}

/*
�ӽ� ��ü : 
getName [ res ]
main    [ a   ]
a�� res�� return �޾ƾ� �ϴµ� res�� �Ҹ�� ��!!!
=> �ӽ� ��ü�� res�� ���簡 ��! ... �갡 ��Ƴ��Ƽ� a�� ����Ǵ� ��.
res -> �ӽð�ü -> a : ���� �� 2��!!! �ٵ� ���� �̷� �ʿ䰡 ����

  res   �ӽð�ü    a
   .       .       .
   .       .       .
strData strData strData // ���� �ٸ� ����
[     ]>[     ]>[     ]
  (���������) (������Կ�����)
*/

// �츮�� ��ǥ : ��������ڶ� ������Կ����ڸ� ���ְ� ���� ���縦 �� ��!!!!!!
// ���� ������ �������� �޸𸮰� �� �� �����ȴٴ� ���̾��µ� ������ �Ҹ��ڴ� �� ���� ȣ��ǵ���!