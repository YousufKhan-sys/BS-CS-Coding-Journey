#include <iostream>
using namespace std;

int main() {
    int arr[3];
    string dir;
    int n;

    cout << "Enter current time (HH MM SS): ";
    cin >> arr[0] >> arr[1] >> arr[2];

    cout << "Rotate time to LEFT or RIGHT? ";
    cin >> dir;

    cout << "Enter number of positions to rotate: ";
    cin >> n;

    cout << "Original time: ";
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";

    cout << endl;

    n = n % 3;

    if (dir == "left" || dir == "LEFT") {
        for (int i = 0; i < n; i++) {
            int first = arr[0];
            for (int j = 0; j < 2; j++)
                arr[j] = arr[j + 1];
            arr[2] = first;
        }
        cout << "Time after rotating LEFT by " << n << " positions: ";
    }
    else if (dir == "right" || dir == "RIGHT") {
        for (int i = 0; i < n; i++) {
            int last = arr[2];
            for (int j = 2; j > 0; j--)
                arr[j] = arr[j - 1];
            arr[0] = last;
        }
        cout << "Time after rotating RIGHT by " << n << " positions: ";
    }
    else {
        cout << "Invalid direction!" << endl;
        return 0;
    }

    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}