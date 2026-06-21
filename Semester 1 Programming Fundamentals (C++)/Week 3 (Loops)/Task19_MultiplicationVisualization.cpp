#include <iostream>
using namespace std;
int main()
{
    int table, product;
    cout << "Enter the table you want to print" << endl;
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        cout << table << "*" << i << "=";
        cout << table * i << endl;
    }

    system("pause");

    return 0;
}
