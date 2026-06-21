#include <iostream>
#include <cmath>
using namespace std;
void generateCirclePoints(double radius, int numPoints) {
    cout << "Coordinates of points along the circle:"<<endl;
    for (int i = 0; i < numPoints; i++) {
        double angle = (2 * M_PI * i) / numPoints;
        double x = radius * cos(angle);
        double y = radius * sin(angle);
        cout << "Point " << i + 1 << ": (" << x << ", " << y << ")"<<endl;
    }
}
int main() {
    double radius;
    int numPoints;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter the number of points to generate: ";
    cin >> numPoints;
    generateCirclePoints(radius, numPoints);
    return 0;
}