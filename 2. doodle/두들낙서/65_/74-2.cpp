#include <iostream>

using namespace std;

// 2. 복사 생성자, 이동 생성자, 복사 대입 연산자, 이동 대입 연산자 만들기
// 21분부터 영상 꼭 다시 보기!

struct Point {
	int x, y;
};

class Polygon { // 다각형
public:
	Polygon() {
		nPoints = 0;
		points = NULL;
	}

	Polygon(const int nPoints, const Point* points) : nPoints(nPoints) {
		this->points = new Point[nPoints];
		for (int i = 0; i < nPoints; i++) {
			this->points[i] = points[i];
		}
	}
	
	// 복사 생성자 : rhs 객체와 똑같은 내용의 새로운 객체 생성 (깊은 복사)
	Polygon(const Polygon& rhs) {
		nPoints = rhs.nPoints;
		points = new Point[nPoints]; // 배열 생성!
		for (int i = 0; i < nPoints; i++) {
			points[i] = rhs.points[i];
		}
		cout << "깊은 복사" << endl;
	}

	// 이동 생성자 : 얕은 복사
	Polygon(Polygon&& rhs) { // r-value
		nPoints = rhs.nPoints;
		points = rhs.points;
		rhs.points = NULL; // delete 방지~ ^_^
		cout << "얕은 복사" << endl;
	}

	~Polygon() {
		delete[] points;
	}

	// 복사 대입 연산자 (깊은 복사)
	Polygon& operator=(const Polygon& rhs) {
		if (this != &rhs) { // 자기 자신과 다를 때만 복사
			nPoints = rhs.nPoints;
			delete[] points;
			points = new Point[nPoints];
			for (int i = 0; i < nPoints; i++) {
				points[i] = rhs.points[i];
			}
		}
		cout << "깊은 복사" << endl;
		return *this;
	}

	// 이동 대입 연산자 : 얕은 복사
	Polygon& operator=(Polygon&& rhs) {
		if (this != &rhs) { // 이미 할당되어있는 경우에는 지우고 복사해야
			nPoints = rhs.nPoints;
			delete[] points;
			points = rhs.points;
			rhs.points = NULL;
		}
		cout << "얕은 복사" << endl;
		return *this;
	}


	int GetNPoints() const {
		return nPoints;
	}
	Point* GetPoints() const {
		if (nPoints == 0) return NULL;
		return points;
	}
private:
	int nPoints; // 꼭지점 개수
	Point* points; // 구조체 배열
};

Polygon getSquare() {
	Point points[4] = { {0, 0}, {1, 0}, {1, 1}, {0, 1} };
	Polygon p(4, points);
	return p;
}

int main() {
	Polygon a;
	a = getSquare(); // 얕은 객체 복사 2회
	Polygon b = a; // b(a) 깊은 객체 복사 1회
	Polygon c;
	c = a; // 깊은 객체 복사 1회

	int nPoints = c.GetNPoints();
	Point* points = c.GetPoints();
	for (int i = 0; i < nPoints; i++) {
		cout << "(" << points[i].x << ", " << points[i].y << ")" << endl;
	}
	return 0;
}