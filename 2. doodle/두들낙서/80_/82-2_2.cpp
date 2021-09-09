#include <iostream>

using namespace std;

class Animal {
public:
	float xpos = 1;
	float ypos = 2;
};

class FlyingAnimal : public Animal {
public:
	float zpos = 3;
};

void printAnimals(Animal **a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
	}
}

int main() {
	// Animal을 가리키는 포인터들의 배열(10칸짜리)
	Animal** a = new Animal * [10]; //[Animal*][Animal*]...[Animal*]
	for (int i = 0; i < 10; i++) {
		a[i] = new FlyingAnimal; // FA 객체 10개 생성 ... 19분 27초 그림
	}
	printAnimals(a, 10);
	for (int i = 0; i < 10; i++) {
		delete a[i];
	}
	delete[] a;
	return 0;
}

// 82-2_1 : FA 객체들의 배열 -> 얘를 A로 해석하면 3칸짜리 배열을 2칸으로 잘못 해석해서 문제
// 82-2_2 : Animal을 가리키는 포인터들의 배열 ... 따로따로 할당되어있으므로 문제x
// 22분 50초 그림~