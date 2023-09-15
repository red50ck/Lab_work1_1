#include <iostream>

using namespace std;

struct Point {
	int x, y;
};

struct Rectangle {
	Point A, B;
};

int getArea(Rectangle rect, Point P) {
	if (P.x > rect.B.x || P.y > rect.B.y || P.x < rect.A.x || P.y < rect.A.y) {
		return 0;
	}
	if (P.y > (rect.A.y + rect.B.y) / 2.f) {
		return 1;
	}
	if (P.x < (rect.A.x + rect.B.x) / 2.f) {
		return 2;
	}
	return 3;
}

int main() {
	Rectangle rect;
	Point P, A, B;

	char comma;
	cin >> P.x >> comma >> P.y;
	cin >> A.x >> comma >> A.y;
	cin >> B.x >> comma >> B.y; 
	rect.A.x = min(A.x, B.x);
	rect.A.y = min(A.y, B.y);
	rect.B.x = max(A.x, B.x);
	rect.B.y = max(A.y, B.y);
	if (A.x != B.x && A.y != B.y) {
		int area = getArea(rect, P);
		cout << area;
	}
	else {
		cout << "It isn't rectangle >:(";
	}

	return 0;
}