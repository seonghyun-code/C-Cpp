// private, protected, public
// 캡슐화 : private 부분은 보호하면서 외부에서 접근 가능한 public 부분을 제공하는 것...
// 기본적으로 public~~

#include <iostream>

using namespace std;

struct TV {
private:
	bool powerOn; // 전원
	int channel; // 채널
	int volume; // 볼륨

public:
	void on() {
		powerOn = true;
		cout << "TV ON!" << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV OFF!" << endl;
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨 : " << vol << endl;
		}
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			volume = cnl;
			cout << "채널 : " << cnl << endl;
		}
	}
};

int main() {
	TV lg;
	/* 빨간 줄 (private에 접근이 불가능하기 때문) */
	// lg.powerOn = true;
	// lg.volume = 50;
	// lg.channel = 10;
	lg.on();
	lg.setVolume(50);
	lg.setChannel(10);
	lg.setChannel(-99);
	return 0;
}