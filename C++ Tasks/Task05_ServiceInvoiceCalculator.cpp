#include <iostream>
using namespace std;
int main()
{
    string service;
    int quantity;
    float service_fee, subtotal, tax, grand_total;
    cout << "Enter the service Description" << endl;
    cin >> service;
    cout << "Enter the quantity" << endl;
    cin >> quantity;
    cout << "Enter the service fee per unit" << endl;
    cin >> service_fee;
    subtotal = quantity * service_fee;
    tax = subtotal * 0.05;
    grand_total = subtotal + tax;
    cout << "-----------------------------" << endl;
    cout << "Service        | Quantity | Fee | Total" << endl;
    cout << "-----------------------------" << endl;
    cout << service << "           |    " << quantity << " |   " << service_fee << " | " << subtotal << endl;
    cout << "-----------------------------" << endl;
    cout << "Subtotal             | " << subtotal << endl;
    cout << "-----------------------------" << endl;
    cout << "tax(5%)              | " << tax << endl;
    cout << "-----------------------------" << endl;
    cout << "Grandtotal           | " << grand_total << endl;
    return 0;
}
