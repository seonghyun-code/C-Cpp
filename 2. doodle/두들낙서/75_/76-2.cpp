#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

// 부모 클래스의 멤버는 부모 클래스에서 관리하는 게 좋다!
// 장점 : 1) 공통된 부분을 한 번에 관리하기 때문에 효율적으로 관리 가능
//       2) 79강?에 2번 이유 나올 것
class Message {
public:
	Message(int sendTime, string sendName) {
		this->sendTime = sendTime;
		this->sendName = sendName;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message{
public:
	TextMessage(int sendTime, string sendName, string text) : Message(sendTime, sendName) { // 57강 링크 걸어주심요
		this->text = text;
		// 순서 : Message로 먼저 들어가서 sendTime, sendName 초기화 시킨 후 text 초기화
	}

	string GetText() const { return text; }

private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image* image)
		: Message(sendTime, sendName) { // 보기 좋게 엔터~^_^
		this->image = image;
	}

	Image* GetImage() const { return image; }

private:
	Image* image;
};

int main() {
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);

	cout << "보낸 시간 : " << hello->GetSendTime() << endl;
	cout << "보낸 사람 : " << hello->GetSendName() << endl;
	cout << "  내 용   : " << hello->GetText() << endl;
	cout << endl;

	cout << "보낸 시간 : " << dog->GetSendTime() << endl;
	cout << "보낸 사람 : " << dog->GetSendName() << endl;
	cout << "  내 용   : " << (string)*dog->GetImage() << endl;
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}