#include <iostream>
using namespace std;

int main()
{
    int integer, sum = 0;

    for (int count = 0; count < 10; count++)
    {
        cout << "Enter an integer: ";
        cin >> integer;

        bool isPrime = true;

        if (integer <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i < integer; i++)
            {
                if (integer % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout << "prime" << endl;
            sum += integer;
        }
    }

    cout << "Sum of prime numbers: " << sum << endl;
    return 0;
}
