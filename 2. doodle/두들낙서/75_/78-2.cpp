// 가상 함수 ... virtual
// 컴파일러 : currentWeapon은 부모 클래스 포인터이므로 부모 클래스를 훑음
// Use()가 가상 함수임을 알게 됨
// virtual : 호출이 될 수도, 안 될 수도. ... 미래에 맡긴다.
// 가상 함수를 오버라이딩 ... 정적바인딩이 발생

#include <iostream>

using namespace std;

class Weapon {
public:
	Weapon(int power) : power(power) {
		cout << "Weapon(int)" << endl;
	}

	virtual void Use() { // 가상 함수
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

	void Use() {
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
	Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost) {
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
	currentWeapon->Use();
	currentWeapon = &myMagic;
	currentWeapon->Use();
	return 0;
}