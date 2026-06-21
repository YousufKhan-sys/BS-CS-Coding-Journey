#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    if (size == 1)
        return arr[0];
    int minRest = findMin(arr, size - 1);
    return (arr[size - 1] < minRest) ? arr[size - 1] : minRest;
}

int findMax(int arr[], int size) {
    if (size == 1)
        return arr[0];
    int maxRest = findMax(arr, size - 1);
    return (arr[size - 1] > maxRest) ? arr[size - 1] : maxRest;
}

int main() {
    int n;
    cout << "Enter how many numbers (2 to 4): ";
    cin >> n;

    if (n < 2 || n > 4) {
        cout << "Invalid input";
        return 0;
    }

    int arr[4];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Smallest: " << findMin(arr, n) << endl;
    cout << "Largest: " << findMax(arr, n) << endl;

    return 0;
}