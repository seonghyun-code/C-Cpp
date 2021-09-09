/*
2-1. 아래의 GameWindow 클래스의 코드에서 창 너비와 높이를
매개변수로 받는 ResizeWindow 함수를 추가하여
다음 조건과 같이 width와 height의 값을 바꿀 수 있도록 하기.
- 들어온 매개변수의 값과 일치하도록 창 크기를 설정
- 너비가 800보다 작거나 높이가 600보다 작을 때는 각각 800, 600으로 설정할 것

2-2. GameWIndow::GameWindow(int w, int h) 생성자도 2번의 조건을 만족하도록 수정하기

2-3. 상수화가 가능한 부분 모두 상수화 하기


*/

#include <iostream>

using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(const int, const int); // 생성자에는 const 못 붙임~

	int GetWidth() const;
	int GetWeight() const;

	void ResizeWidow(const int, const int);

private:
	int width;
	int height;
};

GameWindow::GameWindow() : width(800), height(600){}
GameWindow::GameWindow(const int w, const int h) {
	ResizeWidow(w, h);
}


int GameWindow::GetWidth() const { return width; }
int GameWindow::GetWeight() const { return height; }

// 생성자가 아니니까 생성자 초기화 목록 사용 불가
void GameWindow::ResizeWidow(const int w, const int h){
	if (w < 800) width = 800;
	else width = w;
	if (h < 600) height = 600;
	else height = h;
}


int main() {
	GameWindow mainWindow;
	mainWindow.ResizeWidow(1366, 768);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetWeight() << endl;
	GameWindow mainWindow2(50, 50);
	cout << mainWindow2.GetWidth() << " x " << mainWindow2.GetWeight() << endl;
	return 0;
}