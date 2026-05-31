#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secret = rand() % 10 + 1; // Random number from 1 to 10

    int guess;
    cout << "Guess a number (1-10): ";
    cin >> guess;

    cout << (guess == secret ? "Correct!\n" : "Wrong guess!\n");

    return 0;
}
