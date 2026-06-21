#include <iostream>
#include <cmath>
using namespace std;

double area(double radius) { return 3.14159 * radius * radius; }
double area(double length, double width) { return length * width; }

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int choice;
    cin >> choice;
    return 0;
}