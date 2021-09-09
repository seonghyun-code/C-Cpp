// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>
using namespace std;

class Myclass {
public:
	Myclass() { // 생성자
		cout << "생성자가 호출되었다!" << endl;
	}
	~Myclass() { // 소멸자
		cout << "소멸자가 호출되었다!" << endl;
	}
};

Myclass globalObj;
void testLocalObj() {
	cout << "testLocalObj 함수 시작" << endl;
	Myclass localObj;
	cout << "testLocalObj 함수 끝" << endl;
}

int main() {
	cout << "main함수 시작" << endl;
	testLocalObj();
	cout << "main함수 끝" << endl;
	return 0;
}

// 지역 변수 : 지역 함수 종료 직후에 바로 소멸~

/*
Q. 생성자와 소멸자를 안 적어주면!? A. ㄱㅊㄱㅊ 호출됨.
default 생성자와 소멸자 : 기본적으로 생성되고 호출되는 애들
Myclass() {

}
~Myclass() {

}
deafult 생성자, 소멸자는 이런 식으로 아무 내용도 없음! 그냥 형식적인 애들!
*/