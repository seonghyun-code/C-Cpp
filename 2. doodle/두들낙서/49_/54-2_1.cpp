// private, protected, public
// ĸ��ȭ : private �κ��� ��ȣ�ϸ鼭 �ܺο��� ���� ������ public �κ��� �����ϴ� ��...
// �⺻������ public~~

#include <iostream>

using namespace std;

struct TV {
private:
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
	/* ���� �� (private�� ������ �Ұ����ϱ� ����) */
	// lg.powerOn = true;
	// lg.volume = 50;
	// lg.channel = 10;
	lg.on();
	lg.setVolume(50);
	lg.setChannel(10);
	lg.setChannel(-99);
	return 0;
}