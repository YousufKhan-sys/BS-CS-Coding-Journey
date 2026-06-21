#include <iostream>
using namespace std;
int main()
{
    string name, designation;
    int departments, i, salary, j, sumsalary = 0;
    cout << "Enter the Number of departments" << endl;
    cin >> departments;
    for (i = 1; i <= departments; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << "Enter the name of the employee" << endl;
            cin >> name;
            cout << "Enter the Salary of the employee" << endl;
            cin >> salary;
            cout << "Enter the Designation of the employee" << endl;
            cin >> designation;
            sumsalary += salary;
            cout << "Department" << i << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
            cout << "Employee Designation: " << designation << endl;
        }
        cout << "Total Salary given to employees by Department" << endl;
    }
    system("pause");
    return 0;
}
