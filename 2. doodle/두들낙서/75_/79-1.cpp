// 오버로딩

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
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
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << m->GetText() << endl;
	cout << endl;
}

void printMessage(ImageMessage* m) {
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << (string)*m->GetImage() << endl;
	cout << endl;
}

int main() {
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);

	printMessage(hello);
	printMessage(dog);
	
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}