#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	str = "Hello";
	cout << str << endl;
	
	str = "Hello, World!";
	cout << str << endl;

	string name;
	cout << "�̸� �Է� : ";
	cin >> name;

	string message = "�ȳ��ϼ���, " + name + "��.";
	cout << message << endl;
	return 0;
}