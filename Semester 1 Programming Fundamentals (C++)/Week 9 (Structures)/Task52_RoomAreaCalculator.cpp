#include <iostream>
using namespace std;

struct Room {
    double length;
    double width;
};

double calculateArea(const Room &room) {
    return room.length * room.width;
}

int main() {
    Room r;
    cin >> r.length >> r.width;
    cout << calculateArea(r);
    return 0;
}