#include <iostream>
using namespace std;
int main() {
    int choice, n;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "\nChoose pattern type:\n";
    cout << "1. Filled Stars\n";
    cout << "2. Hollow Stars\n";
    cout << "3. Pyramid Stars\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "\n";

    switch (choice) {
        case 1:

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 2:
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == 1 || i == n || j == 1 || j == n)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;

        case 3:
            for (int i = 1; i <= n; i++) {
                for (int space = 1; space <= n - i; space++)
                    cout << " ";
                for (int j = 1; j <= 2 * i - 1; j++)
                    cout << "*";
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
