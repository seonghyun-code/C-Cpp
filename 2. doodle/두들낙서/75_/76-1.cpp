/* 雌紗戚 琶推廃 戚政 */
// 五獣走 ... 努什闘 五獣走, 戚耕走 五獣走

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() { // string生稽 莫痕発
		return "紫遭";
	}
};

class TextMessage {
public:
	TextMessage(int sendTime, string sendName, string text) {
		// 益撹 sendTime戚虞壱 床檎 古鯵痕呪 sendTime生稽 昔縦馬奄 凶庚拭 this-> 琶呪
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
		this->image = image; // Image 適掘什 鎧採拭辞澗 疑旋 拝雁吉 五乞軒亜 x -> 乗精 差紫 馬澗汽 庚薦 x(delete 砧腰 硲窒吃 析 x)
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	Image* GetImage() const { return image; }

private:
	int sendTime;
	string sendName;
	Image* image;
	// 戚耕走 匂昔斗研 煽舌 ... 適掘什 遂勲 朕走澗 暗 号走
	// 戚耕走 切端研 煽舌馬檎 遂勲戚..ぞぞぞぞぞぞ
};

int main() {
	// 砧級 : "照括"
	// 砧級 : "悪焼走 紫遭" ... 戚耕走 五獣走
	Image* p_dogImage = new Image();
	TextMessage* hello = new TextMessage(10, "砧級", "照括");
	ImageMessage* dog = new ImageMessage(20, "砧級", p_dogImage);
	// 適掘什 切端研 疑旋拝雁, 匂昔斗級精 疑旋拝雁吉 五乞軒研 亜軒徹澗 雌伐

	cout << "左浬 獣娃 : " << hello->GetSendTime() << endl;
	cout << "左浬 紫寓 : " << hello->GetSendName() << endl;
	cout << "  鎧 遂   : " << hello->GetText() << endl;
	cout << endl;

	cout << "左浬 獣娃 : " << dog->GetSendTime() << endl;
	cout << "左浬 紫寓 : " << dog->GetSendName() << endl;
	cout << "  鎧 遂   : " << (string)*dog->GetImage() << endl; // *dog->GetImage() == *(dog->GetImage()), (string)精 莫痕発~
	delete hello;
	delete dog;
	delete p_dogImage;
	return 0;
}