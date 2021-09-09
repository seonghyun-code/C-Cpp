/*
2-1. �Ʒ��� GameWindow Ŭ������ �ڵ忡�� â �ʺ�� ���̸�
�Ű������� �޴� ResizeWindow �Լ��� �߰��Ͽ�
���� ���ǰ� ���� width�� height�� ���� �ٲ� �� �ֵ��� �ϱ�.
- ���� �Ű������� ���� ��ġ�ϵ��� â ũ�⸦ ����
- �ʺ� 800���� �۰ų� ���̰� 600���� ���� ���� ���� 800, 600���� ������ ��

2-2. GameWIndow::GameWindow(int w, int h) �����ڵ� 2���� ������ �����ϵ��� �����ϱ�

2-3. ���ȭ�� ������ �κ� ��� ���ȭ �ϱ�


*/

#include <iostream>

using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(const int, const int); // �����ڿ��� const �� ����~

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

// �����ڰ� �ƴϴϱ� ������ �ʱ�ȭ ��� ��� �Ұ�
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