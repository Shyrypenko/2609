#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Rectangle {
    Point topLeft;
    Point bottomRight;
};

bool isPointInRectangle(Point p, Rectangle rect) {
    return (p.x >= rect.topLeft.x && p.x <= rect.bottomRight.x &&
        p.y >= rect.bottomRight.y && p.y <= rect.topLeft.y);
}

int main() {
    Rectangle rect = { {0, 10}, {5, 0} };
    Point p = { 3, 5 };

    if (isPointInRectangle(p, rect)) {
        cout << "Точка внутри прямоугольника." << endl;
    }
    else {
        cout << "Точка вне прямоугольника." << endl;
    }

    return 0;
}
