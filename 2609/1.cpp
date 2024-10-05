#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void checkParallelism(Point p1, Point p2) {
    if (p1.x == p2.x) {
        cout << "Прямая параллельна оси ординат (Y)." << endl;
    }
    else if (p1.y == p2.y) {
        cout << "Прямая параллельна оси абсцисс (X)." << endl;
    }
    else {
        cout << "Прямая не параллельна ни одной из осей." << endl;
    }
}

int main() {
    Point p1 = { 0, 2 };
    Point p2 = { 0, 5 };

    checkParallelism(p1, p2);

    return 0;
}
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void checkParallelism(Point p1, Point p2) {
    if (p1.x == p2.x) {
        cout << "Прямая параллельна оси ординат (Y)." << endl;
    }
    else if (p1.y == p2.y) {
        cout << "Прямая параллельна оси абсцисс (X)." << endl;
    }
    else {
        cout << "Прямая не параллельна ни одной из осей." << endl;
    }
}

int main() {
    Point p1 = { 0, 2 };
    Point p2 = { 0, 5 };

    checkParallelism(p1, p2);

    return 0;
}
