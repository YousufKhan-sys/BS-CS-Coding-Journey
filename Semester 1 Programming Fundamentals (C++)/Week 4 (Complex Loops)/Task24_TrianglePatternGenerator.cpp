#include <iostream>
using namespace std;
int main()
{
    int rows, number = 1;
    cout << "   Welcome to Floyd's Triangle Generator!\n";
    cout << "Enter the number of rows for Floyd's triangle: ";
    cin >> rows;
    cout << "\nFloyd's Triangle:\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    cout << "\nThank you for using the Floyd's Triangle Generator!\n";
    return 0;
}
