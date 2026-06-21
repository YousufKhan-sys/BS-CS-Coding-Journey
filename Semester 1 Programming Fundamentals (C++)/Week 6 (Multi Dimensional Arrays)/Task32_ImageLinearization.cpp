#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int image[100][100];
    int linear[10000];

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter pixel values (0–255):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> image[i][j];
        }
    }

    cout << "\nChoose linearization method:\n";
    cout << "1. Row order\n";
    cout << "2. Column order\n";
    cout << "3. Snake (zigzag) order\n";
    int choice;
    cin >> choice;

    int index = 0;

    if (choice == 1) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                linear[index++] = image[i][j];
            }
        }
    }
    else if (choice == 2) {
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                linear[index++] = image[i][j];
            }
        }
    }
    else if (choice == 3) {
        for (int i = 0; i < rows; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < cols; j++) {
                    linear[index++] = image[i][j];
                }
            } else {
                for (int j = cols - 1; j >= 0; j--) {
                    linear[index++] = image[i][j];
                }
            }
        }
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "\nLinearized (1D) array:\n";
    for (int i = 0; i < rows * cols; i++) {
        cout << linear[i] << " ";
    }
    cout << endl;

    return 0;
}