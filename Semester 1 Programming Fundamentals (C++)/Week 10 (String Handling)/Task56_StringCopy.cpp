#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char original[100];
    char copyString[100];

    cin.getline(original,100);
    strcpy(copyString, original);

    cout << copyString;
    return 0;
}