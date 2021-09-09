#include <stdio.h>

// enum
enum EGameState {
	GAMESTATE_MAINMENU = 100,
	GAMESTATE_PLAYING, // 자동으로 101
	GAMESTATE_PAUSED = 1, 
	GAMESTATE_GAMEOVER // 2
};

int main() {
	int currState = GAMESTATE_MAINMENU;
	while (1) {
		switch (currState) {
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAYING:
			break;
		case GAMESTATE_PAUSED:
			break;
		case GAMESTATE_GAMEOVER:
			break;
		}
	}
	return 0;
}
