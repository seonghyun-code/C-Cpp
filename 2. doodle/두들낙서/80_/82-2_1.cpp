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

// 플라잉애니몰을 애니몰로 넘겨주는 건 업캐스팅! ... 문제 없이 형변환 될 것
void printAnimals(Animal a[], int n) { // a[] = *a 같은 말
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i].xpos << ", " << a[i].ypos << ")" << endl;
	}
}

int main() {
	FlyingAnimal* a = new FlyingAnimal[10];
	printAnimals(a, 10); // 포인터 배열처럼 취급 ㄱㄴ ... 출력이 이상함
	delete[] a;
	return 0;
}


/*
Animal       : x, y
FlyingAnimal : x, y, z

Animal a       : [x][y]    8byte
FlyingAnimal f : [x][y][z] 12byte

f [x|y|z][x|y|z][x|y|z]
  100    112    124번지

a는 하나당 8byte이므로
[x|y][z|x][y|z][x|y]이런식으로 착각하는 것

*/