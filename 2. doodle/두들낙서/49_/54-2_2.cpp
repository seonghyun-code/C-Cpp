#include <iostream>

using namespace std;
// 기본적으로 private
class TV {
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
	lg.on();
	lg.setVolume(50);
	lg.setChannel(10);
	lg.setChannel(-99);
	return 0;
}