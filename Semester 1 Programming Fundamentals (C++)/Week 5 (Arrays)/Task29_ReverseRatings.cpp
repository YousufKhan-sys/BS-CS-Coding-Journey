#include <iostream>
using namespace std;
int main()
{
    int i, rating[10], revrating[10], count = 0;
    cout << "Enter 10 Ratings" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> rating[i];
    }
    for (i = 9; i > -1; i--)
    {
        revrating[i] = rating[count];
        count += 1;
    }
    cout << "Reverse Rating" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << revrating[i] << " ";
    }
    return 0;
}