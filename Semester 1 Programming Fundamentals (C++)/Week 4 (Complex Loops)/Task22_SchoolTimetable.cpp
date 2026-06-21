#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        cout << "Day" << i << endl;
        for (j = 1; j <= 6; j++)
        {
            cout << "Enter period" << j << "subject:" << endl;
            string subject;
            cin >> subject;
            cout << "[Saved] Day " << i << ": Period " << j << ": " << subject << endl;
        }
    }
    return 0;
}
