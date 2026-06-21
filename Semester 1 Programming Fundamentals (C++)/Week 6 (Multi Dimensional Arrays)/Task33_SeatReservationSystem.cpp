#include <iostream>
using namespace std;

int main()
{
    int row1 = 0, col1 = 0, available_seats = 25;
    char field;
    cout << "Welcome to seat reservation" << endl;
    cout << "What is your Field" << endl;
    cout << "Input M for Marketing" << endl;
    cout << "Input F for Finance" << endl;
    cout << "Input E for Engineering" << endl;
    cin >> field;
    cout << "Here is the seat map" << endl;
    char seats[6][6] = {
        {'0', '1', '2', '3', '4', '5'},
        {'1', '0', '0', '0', '0', '0'},
        {'2', '0', '0', '0', '0', '0'},
        {'3', '0', '0', '0', '0', '0'},
        {'4', '0', '0', '0', '0', '0'},
        {'5', '0', '0', '0', '0', '0'}};
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            cout << seats[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Enter the seat you want to reserve(first row then col)" << endl;
    cin >> row1;
    cin >> col1;
    if (seats[row1][col1] == '0')
    {
        seats[row1][col1] = field;
        available_seats -= 1;
        for (int row = 0; row < 6; row++)
        {
            for (int col = 0; col < 6; col++)
            {
                cout << seats[row][col] << " ";
            }
            cout << endl;
        }
        cout << "Your seat is successfully reserved" << endl;
    }
    else
    {
        cout << "Seat not available" << endl;
    };

    return 0;
}