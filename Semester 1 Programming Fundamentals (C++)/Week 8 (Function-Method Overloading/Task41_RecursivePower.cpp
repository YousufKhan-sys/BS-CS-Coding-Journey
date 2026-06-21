#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exponent;
    cout<<"Enter base and exponent"<<endl;
    cin >> base >> exponent;
    cout << power(base, exponent);
    return 0;
}