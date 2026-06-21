#include <iostream>
using namespace std;

int rabbitPopulation(long long initialPairs, int months) {
    if (months == 1) return initialPairs;
    if (months == 2) return initialPairs * 2;
    return rabbitPopulation(initialPairs, months - 1) +
           rabbitPopulation(initialPairs, months - 2);
}

int main() {
    int initialPairs;
    int months;

    cout << "Enter initial number of rabbit pairs: ";
    cin >> initialPairs;
    cout << "Enter number of months: ";
    cin >> months;

    if (initialPairs <= 0 || months <= 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << "Total rabbit pairs after " << months << " months: "
         << rabbitPopulation(initialPairs, months);

    return 0;
}