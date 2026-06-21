#include <iostream>
using namespace std;
int main()
{
    int num, score, fact;
    cout << "Enter the number of students" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = 1;
        cout << "Enter the score of student " << i << endl;
        cin >> score;
        for (int j = score; j > 0; j--)
        {
            fact = fact * j;
        }
        cout << "The Factorial score of Student " << i << " is " << fact << endl;
    }

    system("pause");

    return 0;
}
