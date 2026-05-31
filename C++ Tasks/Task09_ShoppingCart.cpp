#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int amount, discount;
    cout << "enter the shopping amount" << endl;
    cin >> amount;
    if (amount > 15000)
    {
        discount = amount - (amount * 0.1);
        cout << "Congrats you have gained a discount,your discounted amount is :" << discount << endl;
    }
    else
    {
        cout << "you are not eligible for discount" << endl;
    }
    system("pause");
    return 0;
}
