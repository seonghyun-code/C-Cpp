/* ����� �ʿ��� ���� */
// �޽��� ... �ؽ�Ʈ �޽���, �̹��� �޽���

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() { // string���� ����ȯ
		return "����";
	}
};

class TextMessage {
public:
	TextMessage(int sendTime, string sendName, string text) {
		// �׳� sendTime�̶�� ���� �Ű����� sendTime���� �ν��ϱ� ������ this-> �ʼ�
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->text = text;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	string GetText() const { return text; }

private:
	int sendTime;
	string sendName;
	string text;
};

class ImageMessage {
public:
	ImageMessage(int sendTime, string sendName, Image* image) {
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->image = image; // Image Ŭ���� ���ο����� ���� �Ҵ�� �޸𸮰� x -> ���� ���� �ϴµ� ���� x(delete �ι� ȣ��� �� x)
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	Image* GetImage() const { return image; }

private:
	int sendTime;
	string sendName;
	Image* image;
	// �̹��� �����͸� ���� ... Ŭ���� �뷮 Ŀ���� �� ����
	// �̹��� ��ü�� �����ϸ� �뷮��..������������
};

int main() {
	// �ε� : "�ȳ�"
	// �ε� : "������ ����" ... �̹��� �޽���
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
	ImageMessage* dog = new ImageMessage(20, "�ε�", p_dogImage);
	// Ŭ���� ��ü�� �����Ҵ�, �����͵��� �����Ҵ�� �޸𸮸� ����Ű�� ��Ȳ

	cout << "���� �ð� : " << hello->GetSendTime() << endl;
	cout << "���� ��� : " << hello->GetSendName() << endl;
	cout << "  �� ��   : " << hello->GetText() << endl;
	cout << endl;

	cout << "���� �ð� : " << dog->GetSendTime() << endl;
	cout << "���� ��� : " << dog->GetSendName() << endl;
	cout << "  �� ��   : " << (string)*dog->GetImage() << endl; // *dog->GetImage() == *(dog->GetImage()), (string)�� ����ȯ~
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}