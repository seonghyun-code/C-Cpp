// �����ε�

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "����";
	}
};

class Message {
public:
	Message(int sendTime, string sendName)
		: sendTime(sendTime), sendName(sendName){}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message {
public:
	TextMessage(int sendTime, string sendName, string text)
		: Message(sendTime, sendName), text(text) {}

	string GetText() const { return text; }

private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image* image)
		: Message(sendTime, sendName), p_image(image) {}

	Image* GetImage() const { return p_image; }

private:
	Image* p_image;
};

void printMessage(TextMessage* m) {
	cout << "���� �ð� : " << m->GetSendTime() << endl;
	cout << "���� ��� : " << m->GetSendName() << endl;
	cout << "  �� ��   : " << m->GetText() << endl;
	cout << endl;
}

void printMessage(ImageMessage* m) {
	cout << "���� �ð� : " << m->GetSendTime() << endl;
	cout << "���� ��� : " << m->GetSendName() << endl;
	cout << "  �� ��   : " << (string)*m->GetImage() << endl;
	cout << endl;
}

int main() {
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
	ImageMessage* dog = new ImageMessage(20, "�ε�", p_dogImage);

	printMessage(hello);
	printMessage(dog);
	
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}