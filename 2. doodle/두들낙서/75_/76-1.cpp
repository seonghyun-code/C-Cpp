/* 상속이 필요한 이유 */
// 메시지 ... 텍스트 메시지, 이미지 메시지

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() { // string으로 형변환
		return "사진";
	}
};

class TextMessage {
public:
	TextMessage(int sendTime, string sendName, string text) {
		// 그냥 sendTime이라고 쓰면 매개변수 sendTime으로 인식하기 때문에 this-> 필수
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
		this->image = image; // Image 클래스 내부에서는 동적 할당된 메모리가 x -> 얕은 복사 하는데 문제 x(delete 두번 호출될 일 x)
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	Image* GetImage() const { return image; }

private:
	int sendTime;
	string sendName;
	Image* image;
	// 이미지 포인터를 저장 ... 클래스 용량 커지는 거 방지
	// 이미지 자체를 저장하면 용량이..ㅎㅎㅎㅎㅎㅎ
};

int main() {
	// 두들 : "안녕"
	// 두들 : "강아지 사진" ... 이미지 메시지
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);
	// 클래스 자체를 동적할당, 포인터들은 동적할당된 메모리를 가리키는 상황

	cout << "보낸 시간 : " << hello->GetSendTime() << endl;
	cout << "보낸 사람 : " << hello->GetSendName() << endl;
	cout << "  내 용   : " << hello->GetText() << endl;
	cout << endl;

	cout << "보낸 시간 : " << dog->GetSendTime() << endl;
	cout << "보낸 사람 : " << dog->GetSendName() << endl;
	cout << "  내 용   : " << (string)*dog->GetImage() << endl; // *dog->GetImage() == *(dog->GetImage()), (string)은 형변환~
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}