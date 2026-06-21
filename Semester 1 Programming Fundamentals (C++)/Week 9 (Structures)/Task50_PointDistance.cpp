#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Line {
    Point start;
    Point end;
};

double distanceBetweenPoints(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    cout << distanceBetweenPoints(p1,p2);
    return 0;
}