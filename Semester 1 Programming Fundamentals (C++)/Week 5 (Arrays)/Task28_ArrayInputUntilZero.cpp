#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int arr[SIZE];
    int value;
    int index;

    while (true) {
        index = 0;

        cout << "Enter array elements (enter '0' to terminate input):" << endl;

        while (true) {
            cin >> value;

            if (value == 0) {
                break;
            }

            if (index < SIZE) {
                arr[index] = value;
                index++;
            }

            if (index == SIZE) {
                bool containsZero = false;
                for (int i = 0; i < SIZE; i++) {
                    if (arr[i] == 0) {
                        containsZero = true;
                        break;
                    }
                }

                if (!containsZero) {
                    cout << "Array with no zero values as input: ";
                    for (int i = 0; i < SIZE; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                    return 0;
                }
                else {
                    break;
                }
            }
        }
    }

    return 0;
}