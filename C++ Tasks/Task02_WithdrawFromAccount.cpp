#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int accbalance, withdraw, finalamount;
    cout << "enter your account balance" << endl;
    cin >> accbalance;
    cout << "enter amount to withdraw" << endl;
    cin >> withdraw;
    finalamount = accbalance - withdraw;
    cout << "your remaining account balance is:" << finalamount << endl;
    return 0;
}
