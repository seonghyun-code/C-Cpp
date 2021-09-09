// 가상 함수와 동적 바인딩
// 정적 바인딩 : 부모 클래스의 포인터가 자식 클래스의 객체를 가리키고 있을 때
// 자식 클래스가 부모 클래스로부터 오버라이딩을 받는 함수가 있음.
// 이때 부모 클래스의 함수가 호출됨!

#include <iostream>

using namespace std;

class Weapon {
public:
	Weapon(int power) : power(power) {
		cout << "Weapon(int)" << endl;
	}

	void Use() {
		cout << "Weapon::Use()" << endl;
	}

protected:
	int power;
};

class Sword : public Weapon {
public:
	Sword(int power) : Weapon(power) {
		cout << "Sword(int)" << endl;
	}

	void Use(){
		cout << "Sword::Use()" << endl;
		Swing();
	}

private:
	void Swing() {
		cout << "Swing sword." << endl;
	}

};

class Magic : public Weapon {
public:
	Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost){
		cout << "Magic(int, int)" << endl;
	}

	void Use() {
		cout << "Magic::Use()" << endl;
		Cast();
	}

private:
	int manaCost;
	void Cast() {
		cout << "Cast magic." << endl;
	}

};

int main() {
	Sword mySword(10);
	Magic myMagic(15, 7);
	mySword.Use();
	myMagic.Use();

	Weapon* currentWeapon;
	currentWeapon = &mySword;
	currentWeapon->Use(); // 정적 바인딩
	return 0;
}