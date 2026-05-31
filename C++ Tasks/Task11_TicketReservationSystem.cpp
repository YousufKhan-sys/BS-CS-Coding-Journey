#include <iostream>
using namespace std;
int main()
{
    int available_seats, demanded_seats;
    available_seats = 35;
    cout << "Welcome to the Ticket reservation center" << endl;
    cout << "Enter the amount of seats you want to reserve" << endl;
    cin >> demanded_seats;
    if (demanded_seats <= available_seats)
    {
        available_seats = available_seats - demanded_seats;
        cout << "Seats reserved successfully,Enjoy your journey\n"
             << "Remaining seats: " << available_seats << endl;
    }
    else
    {
        cout << "Seats not available" << endl;
    }

    return 0;
}
