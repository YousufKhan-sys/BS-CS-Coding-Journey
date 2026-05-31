#include <iostream>
using namespace std;

int main()
{
    int age1, age2, age3;

    cout << "Enter age of Friend 1: ";
    cin >> age1;
    cout << "Enter age of Friend 2: ";
    cin >> age2;
    cout << "Enter age of Friend 3: ";
    cin >> age3;

    if (age1 < age2 && age1 < age3)
    {
        cout << "Friend 1 is the youngest with age " << age1 << endl;
    }
    else if (age2 < age1 && age2 < age3)
    {
        cout << "Friend 2 is the youngest with age " << age2 << endl;
    }
    else if (age3 < age1 && age3 < age2)
    {
        cout << "Friend 3 is the youngest with age " << age3 << endl;
    }
    else
    {
        cout << "Two or more friends have the same youngest age." << endl;
    }

    return 0;
}
