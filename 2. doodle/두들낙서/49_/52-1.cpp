#include <iostream>
#include <string>
/*
1. 이름과 점수를 받고, 다음과 같이 출력되는 프로그램 작성

이름 입력 : 두들낙서
점수 입력 : 80
두들낙서님의 점수는 80점입니다.
*/
int main() {
	std::string name;
	int score;
	std::cout << "이름 입력 : ";
	std::cin >> name;
	std::cout << "점수 입력 : ";
	std::cin >> score;
	std::cout << name << "님의 점수는 " << score << "점입니다." << std::endl;
	return 0;
}