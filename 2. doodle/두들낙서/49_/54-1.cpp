/*
struct(����ü) vs class : ������ �� �� ���� ����

	Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
	Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� 'Ʋ'(�ڷ���) ...�ؾ Ʋ
	��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����) ... �ؾ
	(ex) int a, b, c;
		@int : �ؾ Ʋ(Ÿ��)
		@a, b, c : �ؾ(��ü, object)
*/

#include <iostream>

using namespace std;

struct TV {
	bool powerOn; // ����
	int channel; // ä��
	int volume; // ����

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
	// lg.volume = 400; // �� �̰� �� ���� ������ -.-...
	/* �ȿ����� ���ٰ��������� �ۿ����� ���� �Ұ����� �Լ��� ������ ���ڴ�. */
	return 0;
}