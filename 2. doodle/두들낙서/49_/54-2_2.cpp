#include <iostream>

using namespace std;
// �⺻������ private
class TV {
	bool powerOn; // ����
	int channel; // ä��
	int volume; // ����

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
			cout << "���� : " << vol << endl;
		}
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			volume = cnl;
			cout << "ä�� : " << cnl << endl;
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