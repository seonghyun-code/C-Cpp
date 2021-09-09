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

// �ö��׾ִϸ��� �ִϸ��� �Ѱ��ִ� �� ��ĳ����! ... ���� ���� ����ȯ �� ��
void printAnimals(Animal a[], int n) { // a[] = *a ���� ��
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i].xpos << ", " << a[i].ypos << ")" << endl;
	}
}

int main() {
	FlyingAnimal* a = new FlyingAnimal[10];
	printAnimals(a, 10); // ������ �迭ó�� ��� ���� ... ����� �̻���
	delete[] a;
	return 0;
}


/*
Animal       : x, y
FlyingAnimal : x, y, z

Animal a       : [x][y]    8byte
FlyingAnimal f : [x][y][z] 12byte

f [x|y|z][x|y|z][x|y|z]
  100    112    124����

a�� �ϳ��� 8byte�̹Ƿ�
[x|y][z|x][y|z][x|y]�̷������� �����ϴ� ��

*/