#include <iostream>
using namespace std;

int a,choice,amount = 0,income = 0,expense = 0;
string category;

void record_transaction() {
            cout << "Enter Category" << endl;
            cin >> category;
            cout << "Enter Transaction Amount" <<endl;
            cin>> amount;
            if (amount>0)
            {
                income = income + amount;
            }
            else if (amount<0)
            {
                expense = expense - amount;
            }
            cout<<"Transaction Category:"<<category<<endl;
            cout<<"Transaction recorded successfully"<<endl;
}

int viewincome() {
return income;
}
int viewexpense() {
return expense;
}
int viewbudget() {
return income - expense;
}

int main()
{
    int choice;

    cout << "Personal Finance Tracker Menu:" << endl;
    do
    {
        cout << "Select options (1-5)" << endl;
        cout << "1) Record Transaction" << endl;
        cout << "2) View Income" << endl;
        cout << "3) View Expense" << endl;
        cout << "4) View Budget" << endl;
        cout << "5) Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            record_transaction();
        }
        else if (choice == 2) {
            cout<<"Your income:"<<viewincome()<<endl;
        }
        else if (choice == 3) {
            cout<<"Your expense:"<<viewexpense()<<endl;
        }
        else if (choice == 4) {
            cout<<"Your budget:"<<viewbudget()<<endl;
        }
        else if (choice == 5) {
            cout << "Program exit..." << endl;
        }
        else {
            cout << "Enter valid choice" << endl;
        }
    } while (choice!=5);

    return 0;
}