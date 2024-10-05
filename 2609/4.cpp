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

void normalize(Rectangle& rect) {
    if (rect.topLeft.x > rect.bottomRight.x) swap(rect.topLeft.x, rect.bottomRight.x);
    if (rect.topLeft.y < rect.bottomRight.y) swap(rect.topLeft.y, rect.bottomRight.y);
}

void move(Rectangle& rect, int dx, int dy) {
    rect.topLeft.x += dx;
    rect.topLeft.y += dy;
    rect.bottomRight.x += dx;
    rect.bottomRight.y += dy;
}

void resize(Rectangle& rect, int width, int height) {
    rect.bottomRight.x = rect.topLeft.x + width;
    rect.bottomRight.y = rect.topLeft.y - height;
}

int main() {
    Rectangle rect = { {2, 7}, {5, 4} };

    normalize(rect);
    cout << "Нормализованный прямоугольник: ("
        << rect.topLeft.x << ", " << rect.topLeft.y << ") - ("
        << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;

    move(rect, 2, 3);
    cout << "Перемещенный прямоугольник: ("
        << rect.topLeft.x << ", " << rect.topLeft.y << ") - ("
        << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;

    resize(rect, 6, 8);
    cout << "Изменённый размер прямоугольника: ("
        << rect.topLeft.x << ", " << rect.topLeft.y << ") - ("
        << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;

    return 0;
}
