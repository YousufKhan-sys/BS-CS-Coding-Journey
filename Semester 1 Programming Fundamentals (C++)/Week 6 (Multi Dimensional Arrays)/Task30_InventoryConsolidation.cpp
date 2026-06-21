#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of products" << endl;
    cin >> r;
    cout << "Enter the number of locations" << endl;
    cin >> c;
    int m1[r][c], m2[r][c], m3[r][c];
    cout << "Enter inventory for current month" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter inventory for previous month" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "The Consolidated inventory (Previous + Current Month)" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m3[i][j] << endl;
        }
    }

    return 0;
}