/*
struct(구조체) vs class : 차이점 딱 한 가지 있음

	클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
	클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 '틀'(자료형) ...붕어빵 틀
	객체(오브젝트) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간) ... 붕어빵
	(ex) int a, b, c;
		@int : 붕어빵 틀(타입)
		@a, b, c : 붕어빵(객체, object)
*/

#include <iostream>

using namespace std;

struct TV {
	bool powerOn; // 전원
	int channel; // 채널
	int volume; // 볼륨

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
		}
	}
};

int main() {
	TV lg;
	lg.powerOn = true;
	lg.channel = 10;
	lg.setVolume(50);
	// lg.volume = 400; // 아 이건 안 쓰고 싶은데 -.-...
	/* 안에서는 접근가능하지만 밖에서는 접근 불가능한 함수가 있으면 좋겠다. */
	return 0;
}