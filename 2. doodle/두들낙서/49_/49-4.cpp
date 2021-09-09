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
	cout << "¿Ã∏ß ¿‘∑¬ : ";
	cin >> name;

	string message = "æ»≥Á«œººø‰, " + name + "¥‘.";
	cout << message << endl;
	return 0;
}