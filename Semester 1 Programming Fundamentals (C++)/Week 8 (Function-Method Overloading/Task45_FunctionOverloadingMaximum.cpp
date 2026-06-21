#include <iostream>
using namespace std;

int maxInt(int a, int b) {
    if (a == b) return a;
    return (a > b) ? a : b;
}

float maxFloat(float a, float b) {
    if (a == b) return a;
    return (a > b) ? a : b;
}

float maxOfThree(float a, float b, float c) {
    float maxBC = maxFloat(b, c);
    return maxFloat(a, maxBC);
}

int main() {
    int choice;
    cout << "Choose option:\n1. Maximum of 2 readings\n2. Maximum of 3 readings\n";
    cin >> choice;

    if (choice == 1) {
        float a, b;
        cin >> a >> b;
        cout << "Maximum: " << maxFloat(a, b) << endl;
    } else if (choice == 2) {
        float x, y, z;
        cin >> x >> y >> z;
        cout << "Maximum: " << maxOfThree(x, y, z) << endl;
    }

    return 0;
}