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
	// Animal�� ����Ű�� �����͵��� �迭(10ĭ¥��)
	Animal** a = new Animal * [10]; //[Animal*][Animal*]...[Animal*]
	for (int i = 0; i < 10; i++) {
		a[i] = new FlyingAnimal; // FA ��ü 10�� ���� ... 19�� 27�� �׸�
	}
	printAnimals(a, 10);
	for (int i = 0; i < 10; i++) {
		delete a[i];
	}
	delete[] a;
	return 0;
}

// 82-2_1 : FA ��ü���� �迭 -> �긦 A�� �ؼ��ϸ� 3ĭ¥�� �迭�� 2ĭ���� �߸� �ؼ��ؼ� ����
// 82-2_2 : Animal�� ����Ű�� �����͵��� �迭 ... ���ε��� �Ҵ�Ǿ������Ƿ� ����x
// 22�� 50�� �׸�~