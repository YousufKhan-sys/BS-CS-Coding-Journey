#include <iostream>
using namespace std;
int main()
{
    int choice;
    int Quantity;
    char Option;
    char more = 'y';
    float sum[100];
    float total;
    string n[5];
    int i = 0;

    cout << "==== Welcome To The FastBite Online Ordering ===" << endl;
    cout << "1.  Burger - $5.99 " << endl;
    cout << "2.  Pizza - $8.49 " << endl;
    cout << "3.  Fries - $2.99 " << endl;
    cout << "4.  Soda - $1.99 " << endl;
    cout << "5.  ice Cream - $3.50 " << endl;
    cout << " " << endl;
    while (more == 'y')
    {
        i = i + 1;
        cout << "Enter The Item Number To Order (1-5) :";
        cin >> choice;
        if (choice == 1)
        {
            n[i] = " Burger ";
        }
        else if (choice == 2)
        {
            n[i] = " Pizza ";
        }
        else if (choice == 3)
        {
            n[i] = " Fries ";
        }
        else if (choice == 4)
        {
            n[i] = " Soda ";
        }
        else if (choice == 5)
        {
            n[i] = " Ice Cream ";
        }

        cout << "Enter Quantity For " << n[i] << ": ";
        cin >> Quantity;
        if (choice == 1)
        {
            sum[i] = Quantity * 5.99;
        }
        else if (choice == 2)
        {
            sum[i] = Quantity * 8.49;
        }
        else if (choice == 3)
        {
            sum[i] = Quantity * 2.99;
        }
        else if (choice == 4)
        {
            sum[i] = Quantity * 1.99;
        }
        else if (choice == 5)
        {
            sum[i] = Quantity * 3.50;
        }
        cout << "Do YOU want to add more items ? (y/n)";
        cin >> more;
        cout << " " << endl;
    }

    cout << "Choose Delivery(d) or Pickup (p) : ";
    cin >> Option;
    cout << " " << endl;

    cout << "== Order Summary ==" << endl;
    if (Option == 'd')
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n[j] << " x" << Quantity << " = $" << sum[j] << endl;
            total = total + sum[j];
        }
        total = total + 3;
        cout << "Delivery Fee: $3.00" << endl;
    }
    else
    {
        for (int j = 0; j <= Quantity; j++)
        {
            total = total + sum[j];
        }

        cout << "Total : $" << total << endl;
    }
}